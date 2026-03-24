/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x14086E92C
 * Callers:
 *     PopSetDripsWatchdog @ 0x14087A050 (PopSetDripsWatchdog.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402DEFA8 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x14086E714 (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086E7C0 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140416CA8 & 2) != 0 )
  {
    v1 = MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)v4);
    v2 = PopWdiCurrentScenarioInstanceIdV2;
    if ( (dword_140416D64 & 1) != 0 )
    {
      PopDripsWatchdogResetCallbackState((__int64)&dword_140416D70, v1, v4);
      qword_140416D68 = 0LL;
      qword_140416D88 = v1;
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140416CB0);
    }
    if ( (dword_140416E64 & 1) != 0 )
    {
      memset(&unk_140416E68, 0, 0x50uLL);
      dword_140416E8C = dword_140417944;
      xmmword_140416E98 = v4[0];
      qword_140416E90 = qword_14043C3E8;
      xmmword_140416EA8 = v4[1];
      PopDripsWatchdogScheduleNextTimer((__int64)&unk_140416DB0);
    }
    dword_140416CA8 |= 4u;
    qword_140416EC0 = v2;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
