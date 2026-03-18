/*
 * XREFs of KeIsHyperThreadingEnabled @ 0x140A3B8CC
 * Callers:
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsHyperThreadingEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  return HalIsHyperThreadingEnabled(a1, a2, a3);
}
