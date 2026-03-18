/*
 * XREFs of KeRemoveQueue @ 0x140127C00
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14018CA50 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
