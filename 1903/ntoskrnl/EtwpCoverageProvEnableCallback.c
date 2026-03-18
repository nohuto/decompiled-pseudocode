/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x14072DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     TraceLoggingProviderEnabled @ 0x14008A644 (TraceLoggingProviderEnabled.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012B1C4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 */

void __fastcall EtwpCoverageProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  BOOLEAN v4; // di
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = TraceLoggingProviderEnabled(&stru_140426688, 0, 1uLL);
  if ( v4 && !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140427F94 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140427F90 )
      dword_140427F90 = TelemetryCoverageStringHashInternal(off_140427F88, v7);
    EtwTelemetryCoverageReport((__int64)&off_140427F88);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v4 )
  {
    if ( v4 )
    {
      MEMORY[0xFFFFF7800000037C] = -256;
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) |= 1u;
    }
    else
    {
      MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v4;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
