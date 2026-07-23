/*
 * XREFs of KiIsKvaShadowDisabled @ 0x14017E604
 * Callers:
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
