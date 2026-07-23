/*
 * XREFs of KiIsFbClearSupported @ 0x1401B4DC4
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405720E4 (KiDetectKvaLeakage.c)
 *     KeQuerySpeculationControlInformation @ 0x140844F98 (KeQuerySpeculationControlInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
