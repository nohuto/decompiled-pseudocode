/*
 * XREFs of PopBatteryInit @ 0x140A1EE08
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_1404433C0 = 0LL;
  qword_140443208 = 0LL;
  qword_140443228 = (__int64)&qword_140443220;
  qword_140443220 = (__int64)&qword_140443220;
  qword_140443238 = (__int64)&qword_140443230;
  qword_140443230 = (__int64)&qword_140443230;
  *(_QWORD *)&PopCB = 0LL;
  qword_1404433B8 = 0LL;
  memset(&xmmword_1404433C8, 0, 0x20uLL);
  dword_14044338C = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140443328;
  LOBYTE(xmmword_1404433C8) = 1;
  byte_140443388 = 0;
  byte_14044339C = 0;
  dword_140443398 = 0;
  dword_1404433A0 = 0;
  qword_1404433A8 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140443288.Header.Lock = 8LL;
  stru_140443308.Header.WaitListHead.Blink = &stru_140443308.Header.WaitListHead;
  stru_140443308.Header.WaitListHead.Flink = &stru_140443308.Header.WaitListHead;
  qword_1404432E0 = (__int64)PopBatteryWakeDpc;
  stru_140443288.Header.WaitListHead.Blink = &stru_140443288.Header.WaitListHead;
  stru_140443288.Header.WaitListHead.Flink = &stru_140443288.Header.WaitListHead;
  LOWORD(stru_140443308.Header.Lock) = 1;
  stru_140443308.Header.Size = 6;
  stru_140443308.Header.SignalState = 0;
  qword_1404433B0 = 0LL;
  dword_1404432C8 = 275;
  qword_1404432E8 = 0LL;
  qword_140443300 = 0LL;
  qword_1404432D8 = 0LL;
  stru_140443288.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140443288.Processor = 0LL;
  byte_140443218 = 0;
  dword_14044327C = 0;
  *(_QWORD *)&stru_1404429C0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140442998 = (__int64)PopBatteryRefreshStatus;
  result = &stru_1404429C0.Header.WaitListHead;
  stru_1404429C0.Header.WaitListHead.Blink = &stru_1404429C0.Header.WaitListHead;
  stru_1404429C0.Header.WaitListHead.Flink = &stru_1404429C0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_1404429A0 = 0LL;
  qword_1404429B8 = 0LL;
  qword_140442990 = 0LL;
  stru_1404429C0.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1404429C0.Processor = 0LL;
  byte_140443320 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
