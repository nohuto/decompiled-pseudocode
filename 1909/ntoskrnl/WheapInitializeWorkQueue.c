/*
 * XREFs of WheapInitializeWorkQueue @ 0x14019DCD4
 * Callers:
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_14042EB68 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_14042EB98 = (__int64)WheapWorkQueueDpcRoutine;
  qword_14042EBD0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_14042EBE0 = (__int64)WheapProcessWorkQueueItem;
  qword_14042EB70 = 0LL;
  dword_14042EB80 = 275;
  qword_14042EBA0 = (__int64)&WheapWorkQueue;
  qword_14042EBB8 = 0LL;
  qword_14042EB90 = 0LL;
  qword_14042EBD8 = (__int64)&WheapWorkQueue;
  qword_14042EBC0 = 0LL;
  return result;
}
