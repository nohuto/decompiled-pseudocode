/*
 * XREFs of KeInitializeQueue @ 0x140121AA0
 * Callers:
 *     PopFxRegisterPluginEx @ 0x1402D9188 (PopFxRegisterPluginEx.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406A7740 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x140846574 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1409D897C (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x1409D9564 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x1409D9614 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DE794 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.SignalState = 0;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->CurrentCount = 0;
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
