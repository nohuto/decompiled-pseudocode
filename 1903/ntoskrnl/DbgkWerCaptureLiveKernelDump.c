/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14084BF40
 * Callers:
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F3264 (PopFxEnforceDirectedPowerTransition.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14033ECB0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408AAC90 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopWin32CalloutWatchdogCallbackLiveDump @ 0x1408B64A0 (PopWin32CalloutWatchdogCallbackLiveDump.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1408BA5C4 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA748 (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408BB870 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x140913AC0 (ExpIoPoolDeadlockWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlStringCchLengthW @ 0x140099EFC (RtlStringCchLengthW.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     RtlStringCchCopyW @ 0x140153F64 (RtlStringCchCopyW.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     DbgkpWerCleanupContext @ 0x14084C45C (DbgkpWerCleanupContext.c)
 *     DbgkpWerProcessPolicyResult @ 0x14084C988 (DbgkpWerProcessPolicyResult.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v15; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // eax
  char v21[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-24h] BYREF
  __int64 v23[4]; // [rsp+28h] [rbp-20h] BYREF

  v21[0] = 1;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v15 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
      if ( v15 >= 0 )
      {
        v15 = RtlStringCchCopyW(v17, v18, pszSrc);
        if ( v15 >= 0 )
        {
          *((_QWORD *)v17 + 7) = a5;
          *((_QWORD *)v17 + 8) = a6;
          *((_QWORD *)v17 + 9) = a7;
          *((_QWORD *)v17 + 10) = a8;
          *((_DWORD *)v17 + 22) = a9;
          v19 = DbgkpWerDefaultPolicy;
          *((_DWORD *)v17 + 8) = a2;
          *((_QWORD *)v17 + 5) = a3;
          *((_QWORD *)v17 + 6) = a4;
          v22 = v19;
          v23[0] = 0LL;
          v20 = WerLiveKernelCreateReport(v17, &v22, v23);
          v15 = v20;
          if ( v20 >= 0 )
          {
            v15 = DbgkpWerProcessPolicyResult(v17, v22, v23[0], v21);
            if ( !v21[0] )
              goto LABEL_16;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
              v20);
          }
        }
      }
      DbgkpWerCleanupContext(v17);
      ExFreePoolWithTag(v17, 0x57676244u);
    }
    else
    {
      v15 = -1073741670;
    }
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_16;
  }
  v15 = -1073741267;
LABEL_16:
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
