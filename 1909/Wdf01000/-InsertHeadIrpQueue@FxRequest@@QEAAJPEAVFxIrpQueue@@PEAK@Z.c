/*
 * XREFs of ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00139E4
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0014188 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0017234 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C007A1FC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C0018764 (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxRequest::InsertHeadIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, unsigned int *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  _IRP *m_Irp; // rdx
  int inserted; // edi
  FxRequest_vtbl *v9; // rcx
  unsigned int *v10; // [rsp+20h] [rbp-18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue);
  else
    result = 0;
  if ( result >= 0 )
  {
    FxObject::AddRef(this, (void *)0x75657551, 1950, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    m_Irp = this->m_Irp.m_Irp;
    this->m_IrpQueue = IrpQueue;
    inserted = FxIrpQueue::InsertIrpInQueue(IrpQueue, m_Irp, &this->m_CsqContext, 1u, v10);
    if ( inserted < 0 )
    {
      v9 = this->__vftable;
      this->m_IrpQueue = 0LL;
      v9->Release(this, (void *)1969583441, 1966, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    return inserted;
  }
  return result;
}
