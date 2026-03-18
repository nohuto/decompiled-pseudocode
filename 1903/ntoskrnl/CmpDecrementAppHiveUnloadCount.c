/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x14008BF90
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 */

__int64 CmpDecrementAppHiveUnloadCount()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)--CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0LL);
  }
  return result;
}
