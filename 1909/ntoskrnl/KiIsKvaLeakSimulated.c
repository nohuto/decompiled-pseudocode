/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14018628C
 * Callers:
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
