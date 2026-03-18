/*
 * XREFs of PopDirectedDripsNotify @ 0x14071E768
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x14071E6C8 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14071E724 (PopReleaseTransitionLock.c)
 *     PopDripsWatchdogDfxCallback @ 0x14086E2E0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086E650 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsCallbackTakeAction @ 0x140879568 (PopDripsCallbackTakeAction.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6A68 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140867AE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsEngagePs4 @ 0x140867BB0 (PopDirectedDripsEngagePs4.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1408686D8 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsTriggerTransition @ 0x1408687A0 (PopDirectedDripsTriggerTransition.c)
 *     PopDisengageDirectedDrips @ 0x140868894 (PopDisengageDirectedDrips.c)
 *     PopDirectedDripsDiagRundown @ 0x14087B970 (PopDirectedDripsDiagRundown.c)
 */

char __fastcall PopDirectedDripsNotify(int a1, _BYTE *a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // ecx
  bool v8; // zf
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  v3 = PopDirectedDripsState;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(&PopDirectedDripsState, v3, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 1) == 0 )
    return v3;
  v5 = (unsigned int)PopDirectedDripsEnableV2;
  if ( PopDirectedDripsEnableV2 )
  {
    if ( a1 == 7 )
      goto LABEL_50;
    if ( a1 == 8 )
    {
      if ( !dword_140419188 )
        return v3;
      _m_prefetchw(&PopDirectedDripsState);
      if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 0x400) == 0 )
      {
        v9 = 512LL;
        goto LABEL_19;
      }
      goto LABEL_20;
    }
    v6 = (unsigned int)(a1 - 9);
    if ( a1 == 9 )
    {
LABEL_50:
      dword_140419188 = 0;
      return v3;
    }
    if ( a1 == 10 )
    {
      if ( !dword_140419188 )
        return v3;
      _m_prefetchw(&PopDirectedDripsState);
      v8 = (_InterlockedOr(&PopDirectedDripsState, 0) & 0x800) == 0;
      goto LABEL_17;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        LOBYTE(v3) = _InterlockedDecrement(&dword_140419184) <= 0;
        *a2 = v3;
        return v3;
      case 1:
        goto LABEL_11;
      case 2:
        LOBYTE(v3) = _InterlockedExchange(&dword_140419184, dword_140419180);
        return v3;
    }
    v6 = (unsigned int)(a1 - 5);
    if ( a1 == 5 )
    {
      _InterlockedExchange(&dword_140419184, 0);
      *a2 = 1;
      return v3;
    }
    if ( a1 == 6 )
    {
LABEL_11:
      v3 = _InterlockedExchangeAdd(&dword_140419184, 0);
      if ( v3 > 0 )
        return v3;
      v7 = _InterlockedExchangeAdd(&dword_140419190, 0);
      v3 = _InterlockedExchangeAdd(&dword_14041918C, 0);
      if ( !v7 || v7 == v3 )
        return v3;
      v8 = v3 == 0;
LABEL_17:
      if ( v8 )
      {
        v9 = 256LL;
LABEL_19:
        LOBYTE(v3) = PopQueueDirectedDripsWork((struct _KEVENT *)&PopDirectedDripsState, v9);
        return v3;
      }
LABEL_20:
      v9 = 2048LL;
      goto LABEL_19;
    }
  }
  v10 = a1 - 3;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = (unsigned int)(v11 - 7);
      if ( (_DWORD)v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              return v3;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404191F8, 0LL);
            if ( !--dword_140419238 )
              PopDirectedDripsClearDisengageReason(1LL);
          }
          else
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404191F8, 0LL);
            if ( ++dword_140419238 == 1 )
              PopDirectedDripsSetDisengageReason(1LL);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404191F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404191F8);
          LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&qword_1404191F8);
        }
        else
        {
          LOBYTE(v3) = PopDisengageDirectedDrips(
                         &PopDirectedDripsState,
                         v6,
                         (unsigned int)PopDirectedDripsEnableV2,
                         0LL);
        }
      }
      else if ( PopDirectedDripsEnableV2 )
      {
        LOBYTE(v3) = PopDirectedDripsEngagePs4(v12, v6, (unsigned int)PopDirectedDripsEnableV2, 0LL);
      }
      else
      {
        LOBYTE(v3) = PopDirectedDripsTriggerTransition(v12, v6, (unsigned int)PopDirectedDripsEnableV2, 0LL);
      }
    }
    else
    {
      v15 = *(_QWORD *)a2;
      *(_DWORD *)(v15 + 200) = dword_1404191EC;
      LOBYTE(v3) = PopDirectedDripsDiagRundown(v15, v6, v5, 0LL);
    }
  }
  else
  {
    dword_1404191EC = 0;
  }
  return v3;
}
