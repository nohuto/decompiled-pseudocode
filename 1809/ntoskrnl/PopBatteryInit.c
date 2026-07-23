/*
 * XREFs of PopBatteryInit @ 0x1409DC334
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_1404189A8 = 0LL;
  qword_140418B68 = 0LL;
  PopCB = 0LL;
  qword_1404189C8 = (__int64)&qword_1404189C0;
  qword_1404189C0 = (__int64)&qword_1404189C0;
  qword_140418B60 = 0LL;
  qword_1404189D8 = (__int64)&qword_1404189D0;
  qword_1404189D0 = (__int64)&qword_1404189D0;
  memset(&xmmword_140418B70, 0, 0x20uLL);
  dword_140418B30 = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140418AC8;
  LOBYTE(xmmword_140418B70) = 1;
  byte_140418B28 = 0;
  byte_140418B44 = 0;
  dword_140418B40 = 0;
  dword_140418B48 = 0;
  qword_140418B50 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_140418AA8.Header.WaitListHead.Blink = &stru_140418AA8.Header.WaitListHead;
  stru_140418AA8.Header.WaitListHead.Flink = &stru_140418AA8.Header.WaitListHead;
  *(_QWORD *)&stru_140418A28.Header.Lock = 8LL;
  qword_140418A80 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_140418AA8.Header.Lock) = 1;
  stru_140418A28.Header.WaitListHead.Blink = &stru_140418A28.Header.WaitListHead;
  stru_140418A28.Header.WaitListHead.Flink = &stru_140418A28.Header.WaitListHead;
  stru_140418AA8.Header.Size = 6;
  stru_140418AA8.Header.SignalState = 0;
  qword_140418B58 = 0LL;
  dword_140418A68 = 275;
  qword_140418A88 = 0LL;
  qword_140418AA0 = 0LL;
  qword_140418A78 = 0LL;
  stru_140418A28.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140418A28.Processor = 0LL;
  byte_1404189B8 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_140418A1C = 0;
  *(_QWORD *)&stru_1404181C0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140418198 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_1404181C0.Header.WaitListHead;
  stru_1404181C0.Header.WaitListHead.Blink = &stru_1404181C0.Header.WaitListHead;
  stru_1404181C0.Header.WaitListHead.Flink = &stru_1404181C0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_1404181A0 = 0LL;
  qword_1404181B8 = 0LL;
  qword_140418190 = 0LL;
  stru_1404181C0.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1404181C0.Processor = 0LL;
  byte_140418AC0 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
