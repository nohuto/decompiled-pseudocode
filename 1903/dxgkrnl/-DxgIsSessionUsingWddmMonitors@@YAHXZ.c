/*
 * XREFs of ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00EABD0
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CDBBC (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC990 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgIsSessionUsingWddmMonitors(void)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v1 = 0;
  if ( !Current )
    return 1LL;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)Current + 12) + 224LL))(0LL, 0LL, &v3) || v3 )
    return 1;
  return v1;
}
