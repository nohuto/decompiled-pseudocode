/*
 * XREFs of PopBatteryInit @ 0x1409DB334
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013AF20 (KeInitializeIRTimer.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_140417908 = 0LL;
  qword_140417AC8 = 0LL;
  PopCB = 0LL;
  qword_140417928 = (__int64)&qword_140417920;
  qword_140417920 = (__int64)&qword_140417920;
  qword_140417AC0 = 0LL;
  qword_140417938 = (__int64)&qword_140417930;
  qword_140417930 = (__int64)&qword_140417930;
  memset(&xmmword_140417AD0, 0, 0x20uLL);
  dword_140417A90 = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140417A28;
  LOBYTE(xmmword_140417AD0) = 1;
  byte_140417A88 = 0;
  byte_140417AA4 = 0;
  dword_140417AA0 = 0;
  dword_140417AA8 = 0;
  qword_140417AB0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_140417A08.Header.WaitListHead.Blink = &stru_140417A08.Header.WaitListHead;
  stru_140417A08.Header.WaitListHead.Flink = &stru_140417A08.Header.WaitListHead;
  *(_QWORD *)&stru_140417988.Header.Lock = 8LL;
  qword_1404179E0 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_140417A08.Header.Lock) = 1;
  stru_140417988.Header.WaitListHead.Blink = &stru_140417988.Header.WaitListHead;
  stru_140417988.Header.WaitListHead.Flink = &stru_140417988.Header.WaitListHead;
  stru_140417A08.Header.Size = 6;
  stru_140417A08.Header.SignalState = 0;
  qword_140417AB8 = 0LL;
  dword_1404179C8 = 275;
  qword_1404179E8 = 0LL;
  qword_140417A00 = 0LL;
  qword_1404179D8 = 0LL;
  stru_140417988.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140417988.Processor = 0LL;
  byte_140417918 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_14041797C = 0;
  *(_QWORD *)&stru_140417140.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140417118 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140417140.Header.WaitListHead;
  stru_140417140.Header.WaitListHead.Blink = &stru_140417140.Header.WaitListHead;
  stru_140417140.Header.WaitListHead.Flink = &stru_140417140.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140417120 = 0LL;
  qword_140417138 = 0LL;
  qword_140417110 = 0LL;
  stru_140417140.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140417140.Processor = 0LL;
  byte_140417A20 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
