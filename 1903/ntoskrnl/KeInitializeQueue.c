/*
 * XREFs of KeInitializeQueue @ 0x140123920
 * Callers:
 *     PopFxRegisterPluginEx @ 0x1402F463C (PopFxRegisterPluginEx.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CD5C0 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x140880914 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x140A1A608 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140A1B738 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x140A1B7E8 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2066C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
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
