/*
 * XREFs of DpiDisableD3Requests @ 0x1C000F748
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00E3F4C (DpiGetDxgAdapterSafe.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F5BEC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DxgkChangeD3RequestsState @ 0x1C0144790 (DxgkChangeD3RequestsState.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C0263BD0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02660E0 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C026E7C0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0272C00 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 3992));
  return result;
}
