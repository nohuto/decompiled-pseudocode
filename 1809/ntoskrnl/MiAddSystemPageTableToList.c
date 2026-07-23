/*
 * XREFs of MiAddSystemPageTableToList @ 0x14011F298
 * Callers:
 *     MiDeleteSystemPageTable @ 0x14011F0C0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  for ( i = a2; ; _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL) )
  {
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7, a2, a3);
      while ( *(__int64 *)(i + 24) < 0 );
    }
    a2 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(i + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
  }
  *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)i = *a1;
  *a1 = i;
  *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = *(_QWORD *)(i + 40) & 0xFFFFFFFFFLL;
  if ( result != 0xFFFFFFFFFLL )
  {
    v6 = 48 * result - 0x58000000000LL;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8, a2, a3);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    result = MiDecrementShareCount(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
