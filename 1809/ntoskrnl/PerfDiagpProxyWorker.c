/*
 * XREFs of PerfDiagpProxyWorker @ 0x140743CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     PerfDiagpRestartCKCL @ 0x140742CA0 (PerfDiagpRestartCKCL.c)
 *     PerfDiagpIsTracingAllowed @ 0x140743E40 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140743F48 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140744054 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90 (PerfDiagpSaveActiveDCLLogFileName.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  bool v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  const wchar_t *v5; // rdx
  int updated; // eax
  char v7; // si
  const wchar_t *v8; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040B800, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_32;
  if ( dword_14040B808 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_14040B808 == 1 )
        goto LABEL_11;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_4;
    }
    if ( v1 < dword_14040B808 )
    {
      v1 = dword_14040B808;
      goto LABEL_11;
    }
LABEL_32:
    v2 = (dword_14040B808 & 0xFFFFFFF7) != 0;
    dword_14040B808 = 8;
    goto LABEL_12;
  }
LABEL_4:
  if ( v1 == 1 )
  {
    PerfDiagpInitializeLoggerInfo(0LL, 0LL);
    NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
    v8 = L"Diagnostics\\Performance\\BootCKCLSettings";
  }
  else
  {
    v4 = (unsigned int)(v1 - 2);
    if ( v1 == 2 )
    {
      v5 = L"WaitingForLogonEnableKernelFlags";
      goto LABEL_9;
    }
    v4 = (unsigned int)(v1 - 3);
    switch ( v1 )
    {
      case 3:
        v5 = L"EnableKernelFlags";
LABEL_9:
        updated = PerfDiagpUpdateCKCLEnableFlags(v4, v5);
        goto LABEL_10;
      case 4:
LABEL_18:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v2 = 1;
        goto LABEL_11;
      case 5:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v8 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
        goto LABEL_18;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v8 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_11;
    }
  }
  updated = PerfDiagpRestartCKCL(v8);
LABEL_10:
  if ( updated < 0 )
    goto LABEL_32;
LABEL_11:
  dword_14040B808 = v1;
LABEL_12:
  if ( v2 )
    PerfDiagpRestartCKCL(L"WMI\\AutoLogger\\Circular Kernel Context Logger");
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14040B800, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14040B800);
  KeAbPostRelease((ULONG_PTR)&qword_14040B800);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
