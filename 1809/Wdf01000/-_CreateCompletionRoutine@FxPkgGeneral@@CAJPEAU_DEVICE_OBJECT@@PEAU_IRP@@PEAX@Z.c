/*
 * XREFs of ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0090BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x1C0054478 (-PropagatePendingReturned@FxIrp@@QEAAXXZ.c)
 *     ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C0090558 (-CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgGeneral *Context)
{
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxPkgGeneral::CreateCompleted(Context, &irp);
  FxIrp::PropagatePendingReturned(&irp);
  return (unsigned int)OriginalIrp->IoStatus.Status;
}
