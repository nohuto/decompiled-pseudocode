/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1408A3A84
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8698 (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned int v6; // ebx

  _m_prefetchw(PopDirectedDripsState);
  v4 = PopDirectedDripsState[0];
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(PopDirectedDripsState, v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 1) != 0 )
  {
    if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
      PopDeepSleepSetDisengageReason(8u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
    byte_140444849 = a2;
    dword_14044484C = a1;
    byte_140444850 = 0;
    PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
    KeAbPostRelease((ULONG_PTR)&qword_140444840);
    v6 = 259;
    if ( a2 )
      PopDirectedDripsUmMarkTestDevices();
  }
  else
  {
    return 0;
  }
  return v6;
}
