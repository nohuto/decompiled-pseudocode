/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x14086F680
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepEnabled @ 0x140003A5C (PopDeepSleepEnabled.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402DF9A0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x14086F454 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086FA20 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14086FD08 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14087A6DC (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 */

_QWORD *__fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *v2; // rsi
  int v4; // ebx
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r14
  KSPIN_LOCK SpinLock; // rax
  ULONG TableSize; // ecx
  __int128 v9; // xmm0
  ULONG ActiveEntries; // eax
  __int64 v11; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int Blink; // r12d
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h]
  ULONG v23; // [rsp+78h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  v2 = (union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *)&Resource[3].OwnerEntry.0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (v2[45].TableSize & 2) != 0 )
  {
    ++LODWORD(Resource[6].SystemResourcesList.Blink);
    v4 = MEMORY[0xFFFFF78000000008];
    v17 = 0;
    v18 = 0LL;
    v16 = 0;
    PopCalculateIdleInformation((__int64)v19);
    PopDripsWatchdogUpdateMetrics(
      (_DWORD)Resource,
      v4,
      (unsigned int)v19,
      (unsigned int)&v17,
      (__int64)&v18,
      (__int64)&v16);
    v5 = 0LL;
    v6 = 0;
    if ( v20 != -1 )
    {
      SpinLock = Resource[5].SpinLock;
      if ( SpinLock != -1LL )
      {
        v6 = 1;
        v5 = v20 - SpinLock;
      }
    }
    TableSize = v2[45].TableSize;
    if ( (TableSize & 4) == 0 )
    {
      v9 = *(_OWORD *)&Resource[5].ExclusiveWaiters;
      ActiveEntries = Resource[5].ActiveEntries;
      v11 = *(_QWORD *)&Resource[5].OwnerEntry.0;
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      Blink = (unsigned int)Resource[6].SystemResourcesList.Blink;
      v2[45].TableSize = TableSize | 4;
      v21 = v9;
      v23 = ActiveEntries;
      v22 = v11;
      PopDripsWatchdogScheduleNextTimer(v2);
      ExReleaseResourceLite(Resource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v16 )
      {
        if ( !v17 && PopDeepSleepEnabled() )
          PopDeepSleepWatchdogTakeAction(&v21, Flink_high);
      }
      else if ( !qword_14043D498 )
      {
        PopDripsWatchdogTakeAction(&v21, Flink_high, Blink);
      }
      PopDiagTraceCsDripsDivergence(v6, v18, v5);
      if ( v6 )
        PopDripsWatchdogCheckHwDivergence(v5, v18);
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      v2[45].TableSize &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
