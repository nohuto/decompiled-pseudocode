/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x1406612E8
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14009902C (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14027FF14 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 72;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  return KeAbPostRelease(v1);
}
