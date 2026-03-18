/*
 * XREFs of MiInitializeColorTable @ 0x140175164
 * Callers:
 *     MiZeroPageThread @ 0x140185720 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x14018892C (MiCreateZeroThreadContext.c)
 *     MiInitializeLargePageNodeLists @ 0x140750E98 (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_1404657B0 & ExGenRandom(1) | (a2 << byte_14046574D);
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
