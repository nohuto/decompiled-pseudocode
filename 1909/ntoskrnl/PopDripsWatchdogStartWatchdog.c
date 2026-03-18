/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408AACA0
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402FBA58 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x1408AAAFC (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AAB30 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int128 v6[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140442568 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v1 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v1, v1);
    }
    while ( v2 != v1 );
    if ( !v1 )
    {
      v3 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v6);
      v4 = PopWdiCurrentScenarioInstanceIdV2;
      if ( (dword_140442624 & 1) != 0 )
      {
        PopDripsWatchdogResetCallbackState((__int64)&dword_140442630, v3, v6);
        qword_140442628 = 0LL;
        qword_140442648 = v3;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140442570);
      }
      if ( (dword_140442724 & 1) != 0 )
      {
        memset(&unk_140442728, 0, 0x50uLL);
        dword_14044274C = dword_1404431C4;
        xmmword_140442758 = v6[0];
        qword_140442750 = qword_140467BE8;
        xmmword_140442768 = v6[1];
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140442670);
      }
      dword_140442568 |= 4u;
      qword_140442780 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
