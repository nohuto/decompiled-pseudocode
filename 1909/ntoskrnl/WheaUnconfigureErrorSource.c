/*
 * XREFs of WheaUnconfigureErrorSource @ 0x1405AEF60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1)
{
  unsigned __int64 *v1; // rbx
  unsigned int v2; // esi
  PRTL_BALANCED_NODE v3; // rdi
  _RTL_BALANCED_NODE *v4; // rax
  _RTL_BALANCED_NODE *v5; // rdi

  if ( a1 > 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v1 = (unsigned __int64 *)((char *)&WheapSourceConfiguration + 64 * (__int64)(int)a1);
    v2 = -1073741823;
    v3 = KeAbPreAcquire((ULONG_PTR)&WheapConfigTableLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&WheapConfigTableLock, v3, (ULONG_PTR)&WheapConfigTableLock);
    if ( v3 )
      BYTE2(v3[1].Left) |= 1u;
    v4 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v4, (ULONG_PTR)v1);
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
    if ( *((_BYTE *)v1 + 8) )
    {
      *((_BYTE *)v1 + 8) = 0;
      v1[2] = (unsigned __int64)PsGetHostSilo;
      v1[3] = (unsigned __int64)xHalPciEarlyRestore;
      v1[4] = (unsigned __int64)WheapDefaultErrSrcCreateRecord;
      v1[5] = (unsigned __int64)PsGetHostSilo;
      v1[6] = (unsigned __int64)xHalTimerWatchdogStop;
      v1[7] = (unsigned __int64)xHalTimerWatchdogStop;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  }
  return v2;
}
