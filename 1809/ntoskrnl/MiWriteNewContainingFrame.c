/*
 * XREFs of MiWriteNewContainingFrame @ 0x1402C6150
 * Callers:
 *     MiDemotePfnListChain @ 0x1402C55C0 (MiDemotePfnListChain.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiWriteNewContainingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( a2 == 1 )
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) ^= (a3 ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
