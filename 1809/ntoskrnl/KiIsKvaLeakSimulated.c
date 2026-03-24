/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14017E4B0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140572BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
