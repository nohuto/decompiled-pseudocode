/*
 * XREFs of KiIsFbClearSupported @ 0x1401B4C84
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405710E4 (KiDetectKvaLeakage.c)
 *     KeQuerySpeculationControlInformation @ 0x140843D38 (KeQuerySpeculationControlInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
