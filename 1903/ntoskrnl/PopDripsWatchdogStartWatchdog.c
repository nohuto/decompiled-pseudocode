/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408AB440
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402FBFA8 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x1408AB29C (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AB2D0 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_1404425C8 & 2) != 0 )
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
      if ( (dword_140442684 & 1) != 0 )
      {
        PopDripsWatchdogResetCallbackState((__int64)&dword_140442690, v3, v6);
        qword_140442688 = 0LL;
        qword_1404426A8 = v3;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_1404425D0);
      }
      if ( (dword_140442784 & 1) != 0 )
      {
        memset(&unk_140442788, 0, 0x50uLL);
        dword_1404427AC = dword_140443244;
        xmmword_1404427B8 = v6[0];
        qword_1404427B0 = qword_140467EA8;
        xmmword_1404427C8 = v6[1];
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_1404426D0);
      }
      dword_1404425C8 |= 4u;
      qword_1404427E0 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
