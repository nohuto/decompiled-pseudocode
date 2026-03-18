/*
 * XREFs of ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013154
 * Callers:
 *     ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00130B0 (-_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C00144D4 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C30DC (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::CancelForDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  unsigned __int16 v7; // r9
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyCancelForDriver(this, m_Globals, pRequest);
  pRequest->m_IrpQueue = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  Blink = this->m_Cancelled.Blink;
  p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
  if ( Blink->Flink != &this->m_Cancelled )
    __fastfail(3u);
  p_m_OwnerListEntry->Flink = &this->m_Cancelled;
  pRequest->m_OwnerListEntry.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry;
  this->m_Cancelled.Blink = p_m_OwnerListEntry;
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, irql, v6);
  else
    FxIoQueue::DispatchEvents(this, irql, 0LL, v7);
}
