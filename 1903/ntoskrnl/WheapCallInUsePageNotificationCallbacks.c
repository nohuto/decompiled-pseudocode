/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x14091A0D4
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140919F1C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3)
{
  _RTL_BALANCED_NODE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int8 v10; // cf
  _RTL_BALANCED_NODE *v11; // rbx
  PVOID *i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  for ( i = (PVOID *)WheapInUsePageOfflineNotifyList; i != &WheapInUsePageOfflineNotifyList; i = (PVOID *)*i )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    ((void (__fastcall *)(__int64, __int64, __int64, PVOID))i[2])(a1, v8, v9, i[3]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
