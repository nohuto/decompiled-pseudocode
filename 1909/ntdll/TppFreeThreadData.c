/*
 * XREFs of TppFreeThreadData @ 0x18007C410
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(_DWORD *BaseAddress)
{
  struct _TEB *result; // rax

  if ( BaseAddress )
  {
    BaseAddress[2] |= 4u;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, BaseAddress);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
