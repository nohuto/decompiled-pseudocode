/*
 * XREFs of PoAddPowerTriageData @ 0x1402F6CA4
 * Callers:
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x1402ED674 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
