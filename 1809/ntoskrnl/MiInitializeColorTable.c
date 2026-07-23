/*
 * XREFs of MiInitializeColorTable @ 0x14016A5CC
 * Callers:
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     MiInitializeLargePageNodeLists @ 0x14072C52C (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_14043B148 & ExGenRandom(1) | (a2 << byte_14043B109);
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
