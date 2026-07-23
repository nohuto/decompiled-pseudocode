/*
 * XREFs of RtlCreateAtomTableEx @ 0x180072D70
 * Callers:
 *     RtlCreateAtomTable @ 0x180072D60 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // ebp
  SIZE_T v6; // rbx
  _DWORD *Heap; // rax
  _DWORD *v8; // rsi

  v3 = 0;
  if ( *a3 )
    return v3;
  v5 = 37;
  if ( a1 > 1 )
    v5 = a1;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1)) )
  {
    v6 = -1LL;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
      v6 = 24LL * (unsigned int)(v5 - 1) + 80;
    v3 = 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 < 24 * (unsigned __int64)(unsigned int)(v5 - 1)
       ? 0xC0000095
       : 0;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64, v6);
      v8 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, v6);
        v8[16] = v5;
        memset(v8 + 4, 0, 0x30uLL);
        v8[4] = 0x3FFF;
        v8[5] = 16;
        v8[6] = 1;
        *((_QWORD *)v8 + 1) = 0LL;
        *v8 = 1836020801;
        v8[1] = 1;
        *a3 = v8;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v3;
  }
  return 3221225621LL;
}
