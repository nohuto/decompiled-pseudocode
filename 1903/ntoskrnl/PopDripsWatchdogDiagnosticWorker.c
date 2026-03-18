/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x1408AAEF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PopDeepSleepEnabled @ 0x1400ED4E8 (PopDeepSleepEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402FBFA8 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402FC890 (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408AAC90 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AB2D0 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AB5F0 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1408BA5C4 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA748 (PopDripsWatchdogTakeAction.c)
 */

_QWORD *__fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // r14
  KSPIN_LOCK SpinLock; // rax
  int v7; // ecx
  __int128 v8; // xmm0
  ULONG ActiveEntries; // eax
  __int64 v10; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int Blink; // r12d
  struct _KTHREAD *v13; // rax
  int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v18[4]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v19; // [rsp+60h] [rbp+7h] BYREF
  __int64 v20; // [rsp+70h] [rbp+17h]
  ULONG v21; // [rsp+78h] [rbp+1Fh]

  memset(v18, 0, sizeof(v18));
  v19 = 0uLL;
  v20 = 0LL;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (*(_DWORD *)(&Resource[5].26 + 1) & 2) != 0 )
  {
    ++LODWORD(Resource[6].SystemResourcesList.Blink);
    v3 = MEMORY[0xFFFFF78000000008];
    v16 = 0;
    v17 = 0LL;
    v15 = 0;
    PopCalculateIdleInformation((__int64)v18);
    PopDripsWatchdogUpdateMetrics(
      (_DWORD)Resource,
      v3,
      (unsigned int)v18,
      (unsigned int)&v16,
      (__int64)&v17,
      (__int64)&v15);
    v4 = 0LL;
    v5 = 0;
    if ( v18[2] != -1LL )
    {
      SpinLock = Resource[5].SpinLock;
      if ( SpinLock != -1LL )
      {
        v5 = 1;
        v4 = v18[2] - SpinLock;
      }
    }
    v7 = *(_DWORD *)(&Resource[5].26 + 1);
    if ( (v7 & 4) == 0 )
    {
      v8 = *(_OWORD *)&Resource[5].ExclusiveWaiters;
      ActiveEntries = Resource[5].ActiveEntries;
      v10 = *(_QWORD *)&Resource[5].OwnerEntry.0;
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      Blink = (unsigned int)Resource[6].SystemResourcesList.Blink;
      *(_DWORD *)(&Resource[5].26 + 1) = v7 | 4;
      v19 = v8;
      v21 = ActiveEntries;
      v20 = v10;
      PopDripsWatchdogScheduleNextTimer(&Resource[3].OwnerEntry.0);
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v15 )
      {
        if ( !v16 && PopDeepSleepEnabled() )
          PopDeepSleepWatchdogTakeAction(&v19, Flink_high);
      }
      else if ( !qword_140467E98 )
      {
        PopDripsWatchdogTakeAction(&v19, Flink_high, Blink);
      }
      PopDiagTraceCsDripsDivergence(v5, v17, v4);
      if ( v5 )
        PopDripsWatchdogCheckHwDivergence(v4, v17);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      *(_DWORD *)(&Resource[5].26 + 1) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
