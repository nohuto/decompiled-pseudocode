/*
 * XREFs of MiGetLargePageListHeadBase @ 0x1402CCB08
 * Callers:
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetLargePageListHeadBase(int a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  return *(_QWORD *)(a2 + 8 * (a4 + 34LL * a3 + 4 * (a5 + 2LL * a1)) + 144);
}
