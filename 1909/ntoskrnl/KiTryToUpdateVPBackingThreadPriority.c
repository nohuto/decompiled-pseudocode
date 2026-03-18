/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14012C1A8
 * Callers:
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x140011E08 (KiUpdateVPBackingThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x14011F358 (KiTryToAcquireThreadLock.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(__int64 a1, __int64 a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(a1, &v4) )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(a1, a2, 0LL);
    KiReleaseThreadLockSafe(a1);
  }
}
