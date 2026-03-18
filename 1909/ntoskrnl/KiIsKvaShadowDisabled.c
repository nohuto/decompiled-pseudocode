/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1401862A0
 * Callers:
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
