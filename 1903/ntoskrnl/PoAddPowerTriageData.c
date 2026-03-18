/*
 * XREFs of PoAddPowerTriageData @ 0x1402F71F4
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x1402ED910 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
