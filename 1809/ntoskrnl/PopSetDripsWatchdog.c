/*
 * XREFs of PopSetDripsWatchdog @ 0x14087B2B0
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086FB8C (PopDripsWatchdogStartWatchdog.c)
 */

_QWORD *PopSetDripsWatchdog()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]
  __int64 v7; // [rsp+48h] [rbp-10h]

  if ( PopDirectedDripsEnableV2 )
    return PopDripsWatchdogStartWatchdog();
  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_1404C7888, 1u);
    qword_1404C7850 = 0LL;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( !qword_1404C7848 )
    {
      qword_1404C7848 = MEMORY[0xFFFFF78000000008];
      qword_1404C79A8 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_1404C7828 = v5;
      qword_1404C7830 = v6;
      qword_1404C7818 = v7;
      dword_1404C79A4 = v7;
    }
    if ( !qword_1404C7838 )
    {
      dword_1404C7820 = dword_1404189E4;
      qword_1404C7838 = v2;
    }
    if ( !qword_1404C7840 )
      qword_1404C7840 = v2;
    if ( !qword_1404C7858 )
      qword_1404C7858 = qword_14043D4A8;
    qword_1404C7860 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_1404C78F0, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_1404C7888);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
