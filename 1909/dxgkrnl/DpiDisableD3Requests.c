/*
 * XREFs of DpiDisableD3Requests @ 0x1C0008B68
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C0100428 (DpiGetDxgAdapterSafe.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012629C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DxgkChangeD3RequestsState @ 0x1C015AAC0 (DxgkChangeD3RequestsState.c)
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C029F4C0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0970 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02A1D90 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02AB0D0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C02AE440 (DpiLdaHandleQueryDeviceRelations.c)
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
