/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x14072FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     TraceLoggingProviderEnabled @ 0x14008B944 (TraceLoggingProviderEnabled.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012BBE4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
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
  if ( v4 && !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140427FAC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140427FA8 )
      dword_140427FA8 = TelemetryCoverageStringHashInternal(off_140427FA0, v7);
    EtwTelemetryCoverageReport((__int64)&off_140427FA0);
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
