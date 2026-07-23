/*
 * XREFs of PerfDiagpProxyWorker @ 0x14071D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x14071DACC (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14071DBE8 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14076D694 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14078748C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408EE0D0 (PerfDiagpSaveActiveDCLLogFileName.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  char v4; // di
  const wchar_t *v5; // rdx
  int started; // eax
  const wchar_t *v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140432EC0, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_31;
  if ( dword_140432EC8 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_140432EC8 == 1 )
        goto LABEL_9;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_4;
    }
    if ( v1 < dword_140432EC8 )
    {
      v1 = dword_140432EC8;
      goto LABEL_9;
    }
    goto LABEL_31;
  }
LABEL_4:
  if ( v1 == 1 )
  {
    v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
LABEL_19:
    started = PerfDiagpStartPerfDiagLogger(v7);
LABEL_15:
    if ( started >= 0 )
      goto LABEL_9;
LABEL_31:
    dword_140432EC8 = 8;
    goto LABEL_10;
  }
  v3 = (unsigned int)(v1 - 2);
  if ( v1 == 2 )
  {
    v5 = L"WaitingForLogonEnableKernelFlags";
LABEL_14:
    started = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v3, v5);
    goto LABEL_15;
  }
  v3 = (unsigned int)(v1 - 3);
  if ( v1 == 3 )
  {
    v5 = L"EnableKernelFlags";
    goto LABEL_14;
  }
  if ( v1 != 4 )
  {
    switch ( v1 )
    {
      case 5:
        v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
        goto LABEL_8;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_8:
  PerfDiagpInitializeLoggerInfo(0LL, 0LL);
  NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
LABEL_9:
  dword_140432EC8 = v1;
LABEL_10:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140432EC0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140432EC0);
  KeAbPostRelease((ULONG_PTR)&qword_140432EC0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
