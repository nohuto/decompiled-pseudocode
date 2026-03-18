/*
 * XREFs of KiIsKvaShadowDisabled @ 0x14017E4A4
 * Callers:
 *     KiEnableKvaShadowing @ 0x140572BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
