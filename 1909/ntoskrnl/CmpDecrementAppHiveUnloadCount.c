/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x140112B90
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 */

void CmpDecrementAppHiveUnloadCount()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !--CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v0, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
}
