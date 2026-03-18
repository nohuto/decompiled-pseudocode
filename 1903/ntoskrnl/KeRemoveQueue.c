/*
 * XREFs of KeRemoveQueue @ 0x1401271E0
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14018C1D0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
