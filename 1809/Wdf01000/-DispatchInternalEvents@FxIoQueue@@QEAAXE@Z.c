/*
 * XREFs of ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00509AC
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0050F5C (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0078074 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C007881C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxIoQueue::DispatchInternalEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, PreviousIrql, a3);
  else
    FxIoQueue::DispatchEvents(this, PreviousIrql, 0LL, a4);
}
