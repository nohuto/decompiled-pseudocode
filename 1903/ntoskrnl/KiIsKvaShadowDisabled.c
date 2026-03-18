/*
 * XREFs of KiIsKvaShadowDisabled @ 0x140185CF0
 * Callers:
 *     KiEnableKvaShadowing @ 0x14059F83C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
