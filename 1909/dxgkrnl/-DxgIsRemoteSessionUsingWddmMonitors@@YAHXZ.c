/*
 * XREFs of ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0141170
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E9110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0141040 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgIsRemoteSessionUsingWddmMonitors(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  result = DXGPROCESS::GetCurrent(a1, a2);
  if ( result )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*((_QWORD *)result + 12) + 224LL))(0LL, 0LL, &v3);
    return (struct DXGPROCESS *)v3;
  }
  return result;
}
