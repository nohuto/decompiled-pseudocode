/*
 * XREFs of PopBatteryInit @ 0x1409DB334
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013AF00 (KeInitializeIRTimer.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_140417828 = 0LL;
  qword_1404179E8 = 0LL;
  PopCB = 0LL;
  qword_140417848 = (__int64)&qword_140417840;
  qword_140417840 = (__int64)&qword_140417840;
  qword_1404179E0 = 0LL;
  qword_140417858 = (__int64)&qword_140417850;
  qword_140417850 = (__int64)&qword_140417850;
  memset(&xmmword_1404179F0, 0, 0x20uLL);
  dword_1404179B0 = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140417948;
  LOBYTE(xmmword_1404179F0) = 1;
  byte_1404179A8 = 0;
  byte_1404179C4 = 0;
  dword_1404179C0 = 0;
  dword_1404179C8 = 0;
  qword_1404179D0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_140417928.Header.WaitListHead.Blink = &stru_140417928.Header.WaitListHead;
  stru_140417928.Header.WaitListHead.Flink = &stru_140417928.Header.WaitListHead;
  *(_QWORD *)&stru_1404178A8.Header.Lock = 8LL;
  qword_140417900 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_140417928.Header.Lock) = 1;
  stru_1404178A8.Header.WaitListHead.Blink = &stru_1404178A8.Header.WaitListHead;
  stru_1404178A8.Header.WaitListHead.Flink = &stru_1404178A8.Header.WaitListHead;
  stru_140417928.Header.Size = 6;
  stru_140417928.Header.SignalState = 0;
  qword_1404179D8 = 0LL;
  dword_1404178E8 = 275;
  qword_140417908 = 0LL;
  qword_140417920 = 0LL;
  qword_1404178F8 = 0LL;
  stru_1404178A8.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1404178A8.Processor = 0LL;
  byte_140417838 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_14041789C = 0;
  *(_QWORD *)&stru_140417100.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_1404170D8 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140417100.Header.WaitListHead;
  stru_140417100.Header.WaitListHead.Blink = &stru_140417100.Header.WaitListHead;
  stru_140417100.Header.WaitListHead.Flink = &stru_140417100.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_1404170E0 = 0LL;
  qword_1404170F8 = 0LL;
  qword_1404170D0 = 0LL;
  stru_140417100.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140417100.Processor = 0LL;
  byte_140417940 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
