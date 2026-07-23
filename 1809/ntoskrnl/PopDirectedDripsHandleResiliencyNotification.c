/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x140868E58
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  char v3; // bp
  int v4; // r14d
  __int64 v5; // r8

  v1 = (volatile signed __int64 *)(a1 + 312);
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  v3 = *(_BYTE *)(a1 + 321);
  v4 = *(_DWORD *)(a1 + 324);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    if ( *(_BYTE *)(a1 + 320) != v3 )
    {
      LOBYTE(v5) = v3;
      PopDirectedDripsNotifyDrivers(a1, a1 + 232, v5, 0LL);
      if ( !v3 && !PopDirectedDripsEnableV2 )
        _InterlockedExchange((volatile __int32 *)(a1 + 196), *(_DWORD *)(a1 + 192));
    }
  }
  *(_BYTE *)(a1 + 320) = v3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  if ( *(_DWORD *)(a1 + 324) == v4 )
  {
    *(_BYTE *)(a1 + 328) = 1;
    PopQueueWorkItem(a1 + 336, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return PopDeepSleepClearDisengageReason(8u);
}
