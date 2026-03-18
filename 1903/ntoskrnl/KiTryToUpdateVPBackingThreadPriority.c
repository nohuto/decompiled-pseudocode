/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14012B6D8
 * Callers:
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x140011BD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiTryToAcquireThreadLock @ 0x1400F959C (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
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
