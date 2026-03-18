/*
 * XREFs of WheapInitializeWorkQueue @ 0x14019D514
 * Callers:
 *     WheaInitialize @ 0x140A02E24 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_14042EB88 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_14042EBB8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_14042EBF0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_14042EC00 = (__int64)WheapProcessWorkQueueItem;
  qword_14042EB90 = 0LL;
  dword_14042EBA0 = 275;
  qword_14042EBC0 = (__int64)&WheapWorkQueue;
  qword_14042EBD8 = 0LL;
  qword_14042EBB0 = 0LL;
  qword_14042EBF8 = (__int64)&WheapWorkQueue;
  qword_14042EBE0 = 0LL;
  return result;
}
