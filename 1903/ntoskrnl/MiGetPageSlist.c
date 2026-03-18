/*
 * XREFs of MiGetPageSlist @ 0x140115754
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400DBC9C (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x1401157EC (MiSlistGetFreePage.c)
 */

__int64 __fastcall MiGetPageSlist(__int64 a1, unsigned int a2, __int16 a3)
{
  int v3; // ebp
  void *v4; // rsi
  unsigned int v7; // ebx
  int v8; // edi
  __int64 result; // rax

  v3 = dword_140465AB0;
  v4 = &MiZeroThenZero;
  v7 = a2;
  v8 = (a3 & 0x4000) != 0 ? 16 : 1;
  if ( (a3 & 2) == 0 )
    v4 = &MiFreeThenFree;
  while ( 1 )
  {
    result = MiSlistGetFreePage(a1, v4, v7);
    if ( result )
      break;
    v7 = v7 & ~v3 | v3 & (v8 + v7);
    if ( v7 == a2 )
      return 0LL;
  }
  return result;
}
