/*
 * XREFs of MmGetSystemPageCounts @ 0x1400F0DA4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFDC (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140438F20;
}
