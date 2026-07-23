/*
 * XREFs of WheapInitializeWorkQueue @ 0x14017D284
 * Callers:
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.Reserved, 0, 0x88uLL);
  *((_QWORD *)&WheapDispatchPtr.Reserved + 1) = &WheapDispatchPtr.Reserved;
  WheapDispatchPtr.Reserved = &WheapDispatchPtr.Reserved;
  qword_1404076F8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140407730 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140407740 = (__int64)WheapProcessWorkQueueItem;
  qword_1404076D0 = 0LL;
  dword_1404076E0 = 275;
  qword_140407700 = (__int64)&WheapDispatchPtr.Reserved;
  qword_140407718 = 0LL;
  qword_1404076F0 = 0LL;
  qword_140407738 = (__int64)&WheapDispatchPtr.Reserved;
  qword_140407720 = 0LL;
  return result;
}
