/*
 * XREFs of MmGetSystemPageCounts @ 0x1400DA19C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140464640;
}
