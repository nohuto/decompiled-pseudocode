/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x140919CA0
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x140851140 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  _RTL_BALANCED_NODE *v7; // rax
  signed __int8 v8; // cf
  _RTL_BALANCED_NODE *v9; // rdi
  _QWORD *v10; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = Callback;
  PoolWithTag[3] = Context;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = (_QWORD *)qword_140509668;
  if ( *(PVOID **)qword_140509668 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  v6[1] = qword_140509668;
  *v6 = &WheapInUsePageOfflineNotifyList;
  *v10 = v6;
  qword_140509668 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
