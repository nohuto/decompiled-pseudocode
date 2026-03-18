/*
 * XREFs of ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00DC378
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3710 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgIsSessionUsingWddmMonitors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v4 + 24) = 5507LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, &v5) || v5 )
    return 1;
  return v0;
}
