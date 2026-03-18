/*
 * XREFs of KeIsHyperThreadingEnabled @ 0x140A3BAFC
 * Callers:
 *     MiZeroNodePages @ 0x140188120 (MiZeroNodePages.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsHyperThreadingEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  return HalIsHyperThreadingEnabled(a1, a2, a3);
}
