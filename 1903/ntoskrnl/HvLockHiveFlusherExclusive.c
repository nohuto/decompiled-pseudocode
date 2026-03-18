/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140661320
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14009902C (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FE8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
