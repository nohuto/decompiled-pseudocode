/*
 * XREFs of KeInitializeQueue @ 0x1401219D0
 * Callers:
 *     PopFxRegisterPluginEx @ 0x1402D8F98 (PopFxRegisterPluginEx.c)
 *     EtwpCreateUmReplyObject @ 0x1406A62D8 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406A64A0 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x140845314 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1409D797C (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x1409D8564 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x1409D8614 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DD794 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7920 (KeQueryActiveProcessorCountEx.c)
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
