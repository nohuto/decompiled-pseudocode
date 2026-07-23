/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x14086FB8C
 * Callers:
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x14086F974 (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086FA20 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140417D28 & 2) != 0 )
  {
    v1 = MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)v4);
    v2 = PopWdiCurrentScenarioInstanceIdV2;
    if ( (dword_140417DE4 & 1) != 0 )
    {
      PopDripsWatchdogResetCallbackState((__int64)&dword_140417DF0, v1, v4);
      qword_140417DE8 = 0LL;
      qword_140417E08 = v1;
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140417D30);
    }
    if ( (dword_140417EE4 & 1) != 0 )
    {
      memset(&unk_140417EE8, 0, 0x50uLL);
      dword_140417F0C = dword_1404189E4;
      xmmword_140417F18 = v4[0];
      qword_140417F10 = qword_14043D4A8;
      xmmword_140417F28 = v4[1];
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140417E30);
    }
    dword_140417D28 |= 4u;
    qword_140417F40 = v2;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
