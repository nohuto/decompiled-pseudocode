/*
 * XREFs of PspTerminateProcess @ 0x140678A3C
 * Callers:
 *     NtTerminateProcess @ 0x14067B9D0 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x14088DA20 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400F362C (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x1400F3724 (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(
        ULONG_PTR BugCheckParameter1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        int a4)
{
  signed __int32 v8; // esi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v8 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  if ( (v8 & 8) != 0 )
  {
    v10 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v9 = a4 | 4;
    if ( (v8 & 0x40000000) == 0 )
      v9 = a4;
    v10 = v9;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1572) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1572) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) == 0 )
  {
    v11 = PspTerminateAllThreads(BugCheckParameter1, a2, a3, v10);
LABEL_14:
    v12 = v11;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_14040F340 + 1) && (v10 & 8) == 0 )
  {
    v11 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_14040F340 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v12 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_15:
  if ( (v8 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v12;
}
