/*
 * XREFs of ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00144CC
 * Callers:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C0014344 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C0018764 (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxRequest::InsertTailIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, unsigned int *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  unsigned int RefCount; // ecx
  _LIST_ENTRY *Blink; // rax
  _IRP *m_Irp; // rdx
  int inserted; // edi
  __int64 v11; // r9
  FxRequest_vtbl *v12; // rcx
  unsigned int *v13; // [rsp+20h] [rbp-18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue);
  else
    result = 0;
  if ( result >= 0 )
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      Blink = this[-1].m_OwnerListEntry2.Blink;
    else
      Blink = 0LL;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Blink,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        RefCount);
    m_Irp = this->m_Irp.m_Irp;
    this->m_IrpQueue = IrpQueue;
    inserted = FxIrpQueue::InsertIrpInQueue(IrpQueue, m_Irp, &this->m_CsqContext, 0, v13);
    if ( inserted < 0 )
    {
      v12 = this->__vftable;
      this->m_IrpQueue = (FxIrpQueue *)((__int64)this->m_IrpQueue & v11);
      v12->Release(this, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    return inserted;
  }
  return result;
}
