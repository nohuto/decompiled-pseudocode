/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x1401B45CC
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDF0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
