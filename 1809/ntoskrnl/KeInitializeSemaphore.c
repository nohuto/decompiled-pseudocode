/*
 * XREFs of KeInitializeSemaphore @ 0x14008A3D0
 * Callers:
 *     PopWakeDeviceList @ 0x140569954 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140569AB8 (PopSleepDeviceList.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1405F9710 (NtCreateSemaphore.c)
 *     AlpcpInitializePort @ 0x140615CD0 (AlpcpInitializePort.c)
 *     MiInitializeSections @ 0x14072C1F4 (MiInitializeSections.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
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
