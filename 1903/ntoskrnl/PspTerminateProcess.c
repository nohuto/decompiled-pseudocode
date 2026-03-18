/*
 * XREFs of PspTerminateProcess @ 0x1406727B8
 * Callers:
 *     NtTerminateProcess @ 0x1406D6D10 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x1408CAC00 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeSetProcessSchedulingGroup @ 0x1400E93DC (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1400EEA04 (KeForceResumeProcess.c)
 *     EtwTraceProcessTerminate @ 0x140120CD4 (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // esi
  char v8; // al
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 780));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 780), 8u);
  if ( (v7 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v8 = a4 | 4;
    if ( (v7 & 0x40000000) == 0 )
      v8 = a4;
    v9 = v8;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1620) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1620) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
    KeAbPostRelease(BugCheckParameter1 + 736);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 776) & 0x400) == 0 )
  {
    v10 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140436A20 + 1) && (v9 & 8) == 0 )
  {
    v10 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_140436A20 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  PspRundownSingleProcess(BugCheckParameter1);
LABEL_15:
  if ( (v7 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v11;
}
