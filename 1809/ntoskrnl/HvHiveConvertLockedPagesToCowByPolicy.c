/*
 * XREFs of HvHiveConvertLockedPagesToCowByPolicy @ 0x1407099FC
 * Callers:
 *     CmpDoLocalizeNextHive @ 0x140709950 (CmpDoLocalizeNextHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140709AB4 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 */

__int64 __fastcall HvHiveConvertLockedPagesToCowByPolicy(__int64 a1)
{
  signed __int64 *v4; // rdi
  int locked; // esi
  char v6; // al

  if ( (*(_DWORD *)(a1 + 248) & 4) != 0 )
  {
    v4 = (signed __int64 *)(a1 + 72);
    ExAcquirePushLockSharedEx(a1 + 72, 0LL);
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    locked = HvpViewMapConvertLockedPagesToCOWByPolicy(a1 + 216);
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    if ( locked >= 0 )
      return 0;
    return (unsigned int)locked;
  }
  else
  {
    return 0;
  }
}
