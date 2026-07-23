/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x140919E20
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x140851180 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // bl
  _RTL_BALANCED_NODE *v4; // rax
  signed __int8 v5; // cf
  _RTL_BALANCED_NODE *v6; // rdi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *v7; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v8; // rax
  PVOID *v9; // rdx

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v4 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v4, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( Callback == v7[2] )
        break;
      v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*v7;
      if ( (char *)v8 == (char *)&WheapInUsePageOfflineNotifyList )
        goto LABEL_10;
    }
    if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)v8 + 1) != v7 || (v9 = (PVOID *)v7[1], *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    ExFreePoolWithTag(v7, 0x61656857u);
    v1 = 1;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v1 == 0 ? 0xC0000008 : 0;
}
