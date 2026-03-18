/*
 * XREFs of PopBatteryInit @ 0x140A1EFE8
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140443340 = 0LL;
  qword_140443188 = 0LL;
  qword_1404431A8 = (__int64)&qword_1404431A0;
  qword_1404431A0 = (__int64)&qword_1404431A0;
  qword_1404431B8 = (__int64)&qword_1404431B0;
  qword_1404431B0 = (__int64)&qword_1404431B0;
  *(_QWORD *)&PopCB = 0LL;
  qword_140443338 = 0LL;
  memset(&xmmword_140443348, 0, 0x20uLL);
  dword_14044330C = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_1404432A8;
  LOBYTE(xmmword_140443348) = 1;
  byte_140443308 = 0;
  byte_14044331C = 0;
  dword_140443318 = 0;
  dword_140443320 = 0;
  qword_140443328 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140443208.Header.Lock = 8LL;
  stru_140443288.Header.WaitListHead.Blink = &stru_140443288.Header.WaitListHead;
  stru_140443288.Header.WaitListHead.Flink = &stru_140443288.Header.WaitListHead;
  qword_140443260 = (__int64)PopBatteryWakeDpc;
  stru_140443208.Header.WaitListHead.Blink = &stru_140443208.Header.WaitListHead;
  stru_140443208.Header.WaitListHead.Flink = &stru_140443208.Header.WaitListHead;
  LOWORD(stru_140443288.Header.Lock) = 1;
  stru_140443288.Header.Size = 6;
  stru_140443288.Header.SignalState = 0;
  qword_140443330 = 0LL;
  dword_140443248 = 275;
  qword_140443268 = 0LL;
  qword_140443280 = 0LL;
  qword_140443258 = 0LL;
  stru_140443208.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140443208.Processor = 0LL;
  byte_140443198 = 0;
  dword_1404431FC = 0;
  *(_QWORD *)&stru_140442960.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140442938 = (__int64)PopBatteryRefreshStatus;
  result = &stru_140442960.Header.WaitListHead;
  stru_140442960.Header.WaitListHead.Blink = &stru_140442960.Header.WaitListHead;
  stru_140442960.Header.WaitListHead.Flink = &stru_140442960.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140442940 = 0LL;
  qword_140442958 = 0LL;
  qword_140442930 = 0LL;
  stru_140442960.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140442960.Processor = 0LL;
  byte_1404432A0 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
