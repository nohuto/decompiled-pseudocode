/*
 * XREFs of MmGetSystemPageCounts @ 0x1400F0E24
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140439FE0;
}
