/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x1401B45AC
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
