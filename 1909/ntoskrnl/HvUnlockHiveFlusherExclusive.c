/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x14068FF8C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14027FC74 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 72;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  return KeAbPostRelease(v1);
}
