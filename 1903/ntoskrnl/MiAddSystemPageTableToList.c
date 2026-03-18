/*
 * XREFs of MiAddSystemPageTableToList @ 0x14012266C
 * Callers:
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)a2 = *a1;
  *a1 = a2;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  if ( result != 0xFFFFFFFFFLL )
  {
    v5 = 48 * result - 0x58000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    result = MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
