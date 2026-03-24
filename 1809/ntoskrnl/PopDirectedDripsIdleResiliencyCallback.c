/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x140867D18
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14086F268 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6B68 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  signed __int32 v6; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v4 = PopDirectedDripsState;
  v5 = 0;
  do
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange(&PopDirectedDripsState, v4, v4);
  }
  while ( v6 != v4 );
  if ( (v4 & 1) != 0 && (PopDirectedDripsEnableV2 || _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0)) )
  {
    if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
      PopDeepSleepSetDisengageReason(8u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404191D8, 0LL);
    byte_1404191E1 = a2;
    dword_1404191E4 = a1;
    byte_1404191E8 = 0;
    PopQueueDirectedDripsWork((struct _KEVENT *)&PopDirectedDripsState, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404191D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404191D8);
    KeAbPostRelease((ULONG_PTR)&qword_1404191D8);
    return 259;
  }
  return v5;
}
