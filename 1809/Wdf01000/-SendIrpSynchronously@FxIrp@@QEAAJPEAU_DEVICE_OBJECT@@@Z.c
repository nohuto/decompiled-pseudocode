/*
 * XREFs of ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00433A4
 * Callers:
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C0043448 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C006A158 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00831DC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C0087BDC (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0087C80 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C008D53C (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0041824 (--0FxCREvent@@QEAA@E@Z.c)
 */

NTSTATUS __fastcall FxIrp::SendIrpSynchronously(FxIrp *this, _DEVICE_OBJECT *DeviceObject)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  NTSTATUS result; // eax
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&event, (unsigned __int8)DeviceObject);
  CurrentStackLocation = this->m_Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
  CurrentStackLocation[-1].Context = &event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, this->m_Irp);
  if ( result == 259 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    return this->m_Irp->IoStatus.Status;
  }
  return result;
}
