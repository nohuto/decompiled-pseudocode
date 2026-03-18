/*
 * XREFs of PopDirectedDripsNotify @ 0x140749280
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 *     PopDripsWatchdogDfxCallback @ 0x1408AA5C0 (PopDripsWatchdogDfxCallback.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8698 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1401599F0 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140159A4C (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsPnpActionQueueAccountingSend @ 0x1402F1140 (PopDirectedDripsPnpActionQueueAccountingSend.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngagePs4 @ 0x1408A390C (PopDirectedDripsEngagePs4.c)
 *     PopDisengageDirectedDrips @ 0x1408A46C4 (PopDisengageDirectedDrips.c)
 *     PopDirectedDripsDiagRundown @ 0x1408B7834 (PopDirectedDripsDiagRundown.c)
 */

char __fastcall PopDirectedDripsNotify(int a1, __int64 *a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  _m_prefetchw(PopDirectedDripsState);
  v3 = PopDirectedDripsState[0];
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(PopDirectedDripsState, v3, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 1) == 0 )
    return v3;
  v5 = 0;
  if ( a1 > 5 )
  {
    v11 = a1 - 6;
    if ( !v11 )
    {
      LOBYTE(v3) = PopDirectedDripsEngagePs4();
      return v3;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      LOBYTE(v3) = PopDisengageDirectedDrips();
      return v3;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return v3;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
      if ( !--dword_140444880 )
        PopDirectedDripsClearDisengageReason(1);
    }
    else
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
      if ( ++dword_140444880 == 1 )
        PopDirectedDripsSetDisengageReason(1);
    }
    goto LABEL_34;
  }
  if ( a1 == 5 )
  {
    v5 = 0x2000;
LABEL_21:
    v10 = v5 | 0x1000;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
    if ( qword_1404449C8 == *a2 )
    {
      if ( dword_1404449D0 )
      {
        _m_prefetchw(PopDirectedDripsState);
        if ( (v10 & _InterlockedOr(PopDirectedDripsState, v10)) != v10 || dword_1404447D4 )
          PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 0x800uLL);
      }
    }
LABEL_34:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
    LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&qword_140444840);
    return v3;
  }
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
LABEL_12:
        dword_1404447D4 = 0;
        return v3;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return v3;
        goto LABEL_12;
      }
      goto LABEL_21;
    }
    v9 = *a2;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
    *(_DWORD *)(v9 + 200) = dword_140444834;
    qword_1404449C8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
    KeAbPostRelease((ULONG_PTR)&qword_140444840);
    PopDirectedDripsPnpActionQueueAccountingSend();
    LOBYTE(v3) = PopDirectedDripsDiagRundown();
  }
  else
  {
    dword_140444834 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
    qword_1404449C8 = *a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
    KeAbPostRelease((ULONG_PTR)&qword_140444840);
    LOBYTE(v3) = dword_1404447D0;
    if ( (dword_1404447D0 & 4) != 0 )
      LOBYTE(v3) = PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 1uLL);
  }
  return v3;
}
