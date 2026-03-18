/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1408A4244
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1402F1840 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8DC8 (PopDirectedDripsUmMarkTestDevices.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444B60, 0LL);
    byte_140444B69 = a2;
    dword_140444B6C = a1;
    byte_140444B70 = 0;
    PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444B60);
    KeAbPostRelease((ULONG_PTR)&qword_140444B60);
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
