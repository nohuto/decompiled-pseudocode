/*
 * XREFs of sub_18005AF40 @ 0x18005AF40
 * Callers:
 *     RtlCreateAtomTable @ 0x18005BB60 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18005AF40(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // ebp
  _DWORD *Heap; // rax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( *a3 )
    return v3;
  v5 = 37;
  if ( a1 > 1 )
    v5 = a1;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1))
    && 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
  {
    Heap = RtlAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64,
             24LL * (unsigned int)(v5 - 1) + 80);
    v7 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 24LL * (unsigned int)(v5 - 1) + 80);
      v7[16] = v5;
      memset(v7 + 4, 0, 0x30uLL);
      v7[4] = 0x3FFF;
      v7[5] = 16;
      v7[6] = 1;
      *((_QWORD *)v7 + 1) = 0LL;
      *v7 = 1836020801;
      v7[1] = 1;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return v3;
  }
  return 3221225621LL;
}
