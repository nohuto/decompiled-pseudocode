/*
 * XREFs of ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02AFB84
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082350 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00EDD74 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00EDEC8 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 2) = 4;
  KeSetEvent(**(PRKEVENT **)(*((_QWORD *)this + 5) + 8LL), 1, 0);
}
