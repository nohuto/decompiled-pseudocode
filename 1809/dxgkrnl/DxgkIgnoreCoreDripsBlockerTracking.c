/*
 * XREFs of DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54
 * Callers:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DE00 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C0263BD0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02660E0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0272C00 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E4290 (-IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DxgkIgnoreCoreDripsBlockerTracking(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rbx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  Global = DXGGLOBAL::GetGlobal(v4);
  DXGGLOBAL::IgnoreCoreDripsBlockerTracking((__int64)Global, a1, CurrentProcess, 0xFB7u);
}
