/*
 * XREFs of TppFreeThreadData @ 0x180081188
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(unsigned __int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, a1);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
