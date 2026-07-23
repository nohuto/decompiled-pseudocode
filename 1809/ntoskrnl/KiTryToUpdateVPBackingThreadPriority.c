/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x140129D50
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1401151F0 (KiTryToAcquireThreadLock.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(__int64 a1, __int64 a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(a1, &v4) )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(a1, a2, 0);
    KiReleaseThreadLockSafe(a1);
  }
}
