/*
 * XREFs of MmGetSystemPageCounts @ 0x1400F0D84
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFFC (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140438F20;
}
