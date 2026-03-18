/*
 * XREFs of PopDripsWatchdogPs4Callback @ 0x1408AA980
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402F364C (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDeviceConstraintsEnforced @ 0x1403058F4 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408A3E0C (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x1408B8E14 (PopDirectedDripsFindPs4RootDevice.c)
 */

void __fastcall PopDripsWatchdogPs4Callback(__int64 a1)
{
  __int64 v2; // rbx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  _QWORD *i; // rdi
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v13[1] = 0LL;
  if ( PopDeviceConstraintsEnforced() && (int)PopFxBuildDripsBlockingDeviceList(*(_QWORD *)(a1 + 16), v13) >= 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    _m_prefetchw(PopDirectedDripsState);
    v3 = PopDirectedDripsState[0];
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(PopDirectedDripsState, v3, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 1) != 0 )
      dword_1404447D4 = 0;
    for ( i = (_QWORD *)v13[0]; i != v13; i = (_QWORD *)*i )
    {
      v6 = (__int64)(i - 108);
      v7 = *(i - 102);
      if ( (*(_DWORD *)(v7 + 760) & 3) != 0
        || (v8 = *(_QWORD *)(v7 + 80)) != 0 && PopFxIsDirectedPowerTransitionSupported(v8, 0LL)
        || PopDirectedDripsFindPs4RootDevice(v7) )
      {
        PopDirectedDripsMarkCandidateDevice(v6);
      }
    }
    _m_prefetchw(PopDirectedDripsState);
    v9 = PopDirectedDripsState[0];
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(PopDirectedDripsState, v9, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 1) != 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
      if ( qword_1404449C8 == v2 )
      {
        if ( dword_1404449D0 )
        {
          _m_prefetchw(PopDirectedDripsState);
          v11 = PopDirectedDripsState[0];
          do
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange(PopDirectedDripsState, v11 | 0x3000, v11);
          }
          while ( v12 != v11 );
          if ( (v11 & 0x3000) != 0x3000 || dword_1404447D4 )
            PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 0x800uLL);
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
      KeAbPostRelease((ULONG_PTR)&qword_140444840);
    }
    PopFxDestroyDripsBlockingDeviceList(v13);
  }
}
