/*
 * XREFs of ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0019078
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C0050748 (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00190E8 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C6C10 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveIrpFromQueueByContext(FxIrpQueue *this, _IO_CSQ_IRP_CONTEXT *Context)
{
  _IRP *Irp; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _IRP *v6; // r9
  _IRP *result; // rax
  FxIrp fxIrp; // [rsp+38h] [rbp+10h] BYREF

  Irp = Context->Irp;
  if ( !Irp )
    return 0LL;
  m_Globals = this->m_LockObject->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(this, m_Globals, Context);
    Irp = Context->Irp;
  }
  fxIrp.m_Irp = Irp;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    return 0LL;
  FxIrpQueue::RemoveIrpFromListEntry(this, &fxIrp);
  Context->Irp = 0LL;
  result = v6;
  v6->Tail.Overlay.DriverContext[3] = 0LL;
  return result;
}
