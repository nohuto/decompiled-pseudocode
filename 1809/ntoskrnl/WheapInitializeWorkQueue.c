/*
 * XREFs of WheapInitializeWorkQueue @ 0x14017D124
 * Callers:
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0, 0x88uLL);
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1404066B8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_1404066F0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140406700 = (__int64)WheapProcessWorkQueueItem;
  *(_QWORD *)&WheapDispatchPtr.SectorSize = 0LL;
  LODWORD(WheapDispatchPtr.Reserved) = 275;
  qword_1404066C0 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1404066D8 = 0LL;
  qword_1404066B0 = 0LL;
  qword_1404066F8 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1404066E0 = 0LL;
  return result;
}
