/*
 * XREFs of RtlCreateUmsCompletionList @ 0x1800F6070
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     ZwCreateEvent @ 0x1800A0BE0 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlCreateUmsCompletionList(_QWORD *a1)
{
  _QWORD *Heap; // rbx
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp-48h]

  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
  if ( Heap )
  {
    result = ZwCreateEvent();
    v4 = result;
    if ( (int)result < 0 )
      goto LABEL_6;
    *Heap = Heap + 3;
    Heap[3] = 0LL;
    *a1 = Heap;
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
  v4 = result;
LABEL_6:
  if ( (int)result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      return v4;
    }
  }
  return result;
}
