/*
 * XREFs of KeInitializeSemaphore @ 0x14000A390
 * Callers:
 *     NtCreateSemaphore @ 0x1405D7D50 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x140648A24 (AlpcpInitializePort.c)
 *     MiInitializeSections @ 0x140750118 (MiInitializeSections.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
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
