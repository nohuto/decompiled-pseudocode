/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14017E5F0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
