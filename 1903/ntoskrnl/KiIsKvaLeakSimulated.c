/*
 * XREFs of KiIsKvaLeakSimulated @ 0x140185CDC
 * Callers:
 *     KiEnableKvaShadowing @ 0x14059F83C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
