/*
 * XREFs of MiInitializeColorTable @ 0x140174A34
 * Callers:
 *     MiZeroPageThread @ 0x140185170 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x14018837C (MiCreateZeroThreadContext.c)
 *     MiInitializeLargePageNodeLists @ 0x140750408 (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140465AB0 & ExGenRandom(1) | (a2 << byte_140465A4D);
  v3 = 3LL;
  do
  {
    result = ExGenRandom(1);
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}
