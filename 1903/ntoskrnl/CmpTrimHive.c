/*
 * XREFs of CmpTrimHive @ 0x1406621A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x140785908 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     HvTrimHive @ 0x140714C30 (HvTrimHive.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r8d
  char v4; // al

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 4792);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 4796)) != 0 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(a1 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
      v3 = *(_DWORD *)(a1 + 272);
      *(_DWORD *)(a1 + 4796) = v2;
      *(_DWORD *)(a1 + 4800) = v3;
      HvTrimHive(a1, v2);
      v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry();
    }
  }
}
