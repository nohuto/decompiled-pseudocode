/*
 * XREFs of PopSetDripsWatchdog @ 0x14087A070
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14086F288 (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x1402DEEA8 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086E94C (PopDripsWatchdogStartWatchdog.c)
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
    ExAcquireResourceExclusiveLite(&stru_1404C67C8, 1u);
    qword_1404C6790 = 0LL;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( !qword_1404C6788 )
    {
      qword_1404C6788 = MEMORY[0xFFFFF78000000008];
      qword_1404C68E8 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_1404C6768 = v5;
      qword_1404C6770 = v6;
      qword_1404C6758 = v7;
      dword_1404C68E4 = v7;
    }
    if ( !qword_1404C6778 )
    {
      dword_1404C6760 = dword_140417864;
      qword_1404C6778 = v2;
    }
    if ( !qword_1404C6780 )
      qword_1404C6780 = v2;
    if ( !qword_1404C6798 )
      qword_1404C6798 = qword_14043C3E8;
    qword_1404C67A0 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_1404C6830, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_1404C67C8);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
