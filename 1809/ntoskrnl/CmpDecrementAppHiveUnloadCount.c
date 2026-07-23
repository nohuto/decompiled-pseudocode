/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x14013775C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
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
