/*
 * XREFs of ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0050554
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001640 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueue::PostRequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  unsigned __int16 v5; // r9
  FxRequest *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Request;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, a3);
  --this->m_TwoPhaseCompletions;
  --this->m_DriverIoCount;
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, (unsigned __int8)irql, v4);
  else
    FxIoQueue::DispatchEvents(this, (unsigned __int8)irql, 0LL, v5);
}
