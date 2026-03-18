/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A4030 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     PopDirectedDripsPnpActionQueueAccountingUpdate @ 0x1402F135C (PopDirectedDripsPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsResumeDevices @ 0x1408A43B4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4498 (PopDirectedDripsSuspendDevices.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char v3; // bp
  int v4; // r14d

  v1 = (volatile signed __int64 *)(a1 + 160);
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  v3 = *(_BYTE *)(a1 + 169);
  v4 = *(_DWORD *)(a1 + 172);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( *(_BYTE *)(a1 + 168) != v3 )
  {
    PopDirectedDripsPnpActionQueueAccountingUpdate(a1, v3);
    if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
    {
      if ( v3 )
        PopDirectedDripsSuspendDevices(a1);
      else
        PopDirectedDripsResumeDevices(a1, 0LL);
    }
  }
  *(_BYTE *)(a1 + 168) = v3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  if ( *(_DWORD *)(a1 + 172) == v4 )
  {
    *(_BYTE *)(a1 + 176) = 1;
    PopQueueWorkItem(a1 + 184, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return PopDeepSleepClearDisengageReason(8u);
}
