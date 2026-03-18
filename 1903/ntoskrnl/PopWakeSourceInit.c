/*
 * XREFs of PopWakeSourceInit @ 0x140A22020
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *(*PopWakeSourceInit())()
{
  PVOID *(*result)(); // rax

  PopWakeSourceAvailable.Header.Size = 6;
  PopWakeInfoCount = 0;
  qword_140443F08 = (__int64)&PopWakeInfoList;
  PopWakeInfoList = (__int64)&PopWakeInfoList;
  PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
  PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
  qword_140443F38 = (__int64)&PopWakeSourceWorkList;
  PopWakeSourceWorkList = &PopWakeSourceWorkList;
  result = PopUpdateWakeSourceWorker;
  PopWakeSourceWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUpdateWakeSourceWorker;
  PopCurrentWakeInfo = 0LL;
  PopPendingWakeInfo = 0LL;
  PopWakeSourceLock = 0LL;
  LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
  PopWakeSourceAvailable.Header.SignalState = 1;
  PopWakeSourceWorkInProgress = 0;
  PopWakeSourceWorkItem.Parameter = 0LL;
  PopWakeSourceWorkItem.List.Flink = 0LL;
  return result;
}
