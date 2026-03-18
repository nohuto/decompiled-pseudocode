/*
 * XREFs of KeInitializeQueue @ 0x140124310
 * Callers:
 *     EtwpCreateUmReplyObject @ 0x1406CC224 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CC3F0 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x140880014 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x140A1A880 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140A1B9B0 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2084C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
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
