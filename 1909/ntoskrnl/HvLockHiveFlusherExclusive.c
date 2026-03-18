/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x14068FFC4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
