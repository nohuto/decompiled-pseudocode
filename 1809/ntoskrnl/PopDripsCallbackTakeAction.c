/*
 * XREFs of PopDripsCallbackTakeAction @ 0x14087A7A8
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x1402E7348 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14087A8EC (PopDripsWatchdogInvokeDeviceCallbacks.c)
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087A99C (PopDripsWatchdogReportDirectedDripsDevice.c)
 */

void __fastcall PopDripsCallbackTakeAction(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  _QWORD *i; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  bool v10; // [rsp+68h] [rbp+20h]

  if ( (a2 & 0x180) != 0
    && ((byte_14043D510 & 1) == 0 || (a2 & 1) != 0)
    && PopDeviceConstraintsEnforced()
    && (int)PopFxBuildDripsBlockingDeviceList(a1, v9) >= 0 )
  {
    if ( (_QWORD *)v9[0] != v9 )
    {
      v10 = 0;
      if ( (a2 & 0x100) != 0 )
      {
        _m_prefetchw(&PopDirectedDripsState);
        v6 = PopDirectedDripsState;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(&PopDirectedDripsState, v6, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 1) != 0 && !PopDirectedDripsEnableV2 )
          v10 = _InterlockedExchangeAdd(&dword_14041A244, 0xFFFFFFFF) <= 1;
      }
      for ( i = (_QWORD *)v9[0]; i != v9; i = (_QWORD *)*i )
      {
        if ( (a2 & 0x80) != 0 )
          PopDripsWatchdogInvokeDeviceCallbacks(i - 107, a3);
        if ( v10 )
          PopDripsWatchdogReportDirectedDripsDevice(i - 107, a2, 1LL);
      }
      if ( (a2 & 0x100) != 0 )
        PopDirectedDripsNotify(1, 0LL);
    }
    PopFxDestroyDripsBlockingDeviceList(v9);
  }
}
