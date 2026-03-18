/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x1405A49A4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14026C3CC (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 72;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  return KeAbPostRelease(v1);
}
