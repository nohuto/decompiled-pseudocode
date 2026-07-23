/*
 * XREFs of PopDripsWatchdogPs4Callback @ 0x14086F890
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402D7AE4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402D8654 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDeviceConstraintsEnforced @ 0x1402E7348 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408691E4 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x14087D5DC (PopDirectedDripsFindPs4RootDevice.c)
 */

void __fastcall PopDripsWatchdogPs4Callback(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  _QWORD *i; // r8
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD **v8; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( PopDeviceConstraintsEnforced() )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      PopFxClearDirectedDripsCandidateDeviceList();
    if ( (int)PopFxBuildDripsBlockingDeviceList(*(_QWORD *)(a1 + 16), v9) >= 0 )
    {
      v10 = 0LL;
      _m_prefetchw(&PopDirectedDripsState);
      v2 = PopDirectedDripsState;
      do
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange(&PopDirectedDripsState, v2, v2);
      }
      while ( v3 != v2 );
      if ( (v2 & 1) != 0 && PopDirectedDripsEnableV2 )
        dword_14041A248 = 0;
      for ( i = (_QWORD *)v9[0]; i != v9; i = *v8 )
      {
        v5 = (__int64)(i - 107);
        v6 = *(i - 101);
        if ( (*(_DWORD *)(v6 + 760) & 3) != 0
          || (v7 = *(_QWORD *)(v6 + 80)) != 0 && PopFxIsDirectedPowerTransitionSupported(v7)
          || PopDirectedDripsFindPs4RootDevice(v6) )
        {
          PopDirectedDripsMarkCandidateDevice(v5);
        }
      }
      PopDirectedDripsNotify(10, &v10);
      PopFxDestroyDripsBlockingDeviceList(v9);
    }
  }
}
