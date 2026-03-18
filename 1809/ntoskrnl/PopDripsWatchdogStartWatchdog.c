/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x14086E94C
 * Callers:
 *     PopSetDripsWatchdog @ 0x14087A070 (PopSetDripsWatchdog.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402DEEA8 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x14086E734 (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086E7E0 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int128 v4[2]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140416C28 & 2) != 0 )
  {
    v1 = MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)v4);
    v2 = PopWdiCurrentScenarioInstanceIdV2;
    if ( (dword_140416CE4 & 1) != 0 )
    {
      PopDripsWatchdogResetCallbackState((__int64)&dword_140416CF0, v1, v4);
      qword_140416CE8 = 0LL;
      qword_140416D08 = v1;
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140416C30);
    }
    if ( (dword_140416DE4 & 1) != 0 )
    {
      memset(&unk_140416DE8, 0, 0x50uLL);
      dword_140416E0C = dword_140417864;
      xmmword_140416E18 = v4[0];
      qword_140416E10 = qword_14043C3E8;
      xmmword_140416E28 = v4[1];
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140416D30);
    }
    dword_140416C28 |= 4u;
    qword_140416E40 = v2;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
