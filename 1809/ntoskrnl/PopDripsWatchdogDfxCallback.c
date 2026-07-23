/*
 * XREFs of PopDripsWatchdogDfxCallback @ 0x14086F520
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402D8654 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDeviceConstraintsEnforced @ 0x1402E7348 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408691E4 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14087A8EC (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsWatchdogDfxCallback(int *a1)
{
  int v1; // edx
  char v2; // si
  char v4; // bl
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  _QWORD *i; // rdi
  _QWORD *v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  if ( (*a1 & 0x80u) != 0 && ((byte_14043D510 & 1) == 0 || (v1 & 1) != 0) )
    v2 = 1;
  v4 = 0;
  if ( (v1 & 0x100) != 0 )
  {
    v4 = 1;
    v12 = 0LL;
  }
  if ( (v2 || v4)
    && PopDeviceConstraintsEnforced()
    && (int)PopFxBuildDripsBlockingDeviceList(*((_QWORD *)a1 + 2), v11) >= 0 )
  {
    if ( v4 )
    {
      _m_prefetchw(&PopDirectedDripsState);
      v5 = PopDirectedDripsState;
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(&PopDirectedDripsState, v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 1) != 0 && PopDirectedDripsEnableV2 )
        dword_14041A248 = 0;
    }
    for ( i = (_QWORD *)v11[0]; i != v11; i = (_QWORD *)*i )
    {
      v8 = i - 107;
      if ( v4 && PopFxIsDirectedPowerTransitionSupported((__int64)(i - 107)) && v10 >= *((unsigned int *)v8 + 224) )
      {
        PopDirectedDripsMarkCandidateDevice(v9);
      }
      else if ( v2 )
      {
        PopDripsWatchdogInvokeDeviceCallbacks(v8, (unsigned int)a1[1]);
      }
    }
    if ( v4 )
      PopDirectedDripsNotify(8, &v12);
    PopFxDestroyDripsBlockingDeviceList(v11);
  }
}
