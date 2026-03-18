/*
 * XREFs of DpiDisableD3Requests @ 0x1C0008938
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00FB758 (DpiGetDxgAdapterSafe.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DxgkChangeD3RequestsState @ 0x1C0156C00 (DxgkChangeD3RequestsState.c)
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C029F0B0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0560 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02A1980 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02AACC0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C02AE030 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 4096));
  return result;
}
