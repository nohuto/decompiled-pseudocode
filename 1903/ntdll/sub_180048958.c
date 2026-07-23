/*
 * XREFs of sub_180048958 @ 0x180048958
 * Callers:
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180048958(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 result; // rax
  struct _PEB *v6; // rcx
  SIZE_T v7; // r8
  _QWORD *Heap; // rax

  v1 = word_180166040;
  v3 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 208LL;
  *(_WORD *)(v3 + a1) = -1;
  if ( v1 != word_180162798 )
  {
    v4 = off_18015F9A8;
LABEL_5:
    result = v1;
    word_180166040 = v1 + 1;
    v4[v1] = a1;
    return result;
  }
  v6 = NtCurrentPeb();
  v7 = 8LL * (unsigned __int16)(2 * word_180162798);
  word_180162798 *= 2;
  Heap = RtlAllocateHeap(v6->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( Heap )
  {
    v1 = word_180166040;
    memmove(Heap, off_18015F9A8, 8LL * (unsigned __int16)word_180166040);
    if ( off_18015F9A8 != &unk_180163C20 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, off_18015F9A8);
      v1 = word_180166040;
    }
    off_18015F9A8 = v4;
    goto LABEL_5;
  }
  result = (unsigned __int16)word_180166040;
  word_180162798 = word_180166040;
  return result;
}
