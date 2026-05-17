/*
 * XREFs of TpAllocTimer @ 0x180031BA0
 * Callers:
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     sub_18007BDE0 @ 0x18007BDE0 (sub_18007BDE0.c)
 *     sub_18007D678 @ 0x18007D678 (sub_18007D678.c)
 * Callees:
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAllocTimer(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  struct _PEB_LDR_DATA *v7; // r14
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a3;
  v7 = Ldr;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_18010EFC8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 0x100000) | 8u, 360LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      result = sub_180031AA0(Heap, 0, v5, a4, (__int64)off_180118370, (__int64)off_180118360);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *(_QWORD *)&v7->Length = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
