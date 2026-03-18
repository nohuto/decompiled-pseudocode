/*
 * XREFs of KeInitializeSemaphore @ 0x14000A420
 * Callers:
 *     PopFxInitializeWorkPool @ 0x1405B1D88 (PopFxInitializeWorkPool.c)
 *     NtCreateSemaphore @ 0x1405D8510 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x14065C694 (AlpcpInitializePort.c)
 *     MiInitializeSections @ 0x140750BA8 (MiInitializeSections.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Limit = Limit;
}
