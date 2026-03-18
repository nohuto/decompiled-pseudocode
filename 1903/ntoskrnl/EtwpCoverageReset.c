/*
 * XREFs of EtwpCoverageReset @ 0x1408F3374
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x1406BD1C0 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406D64C0 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x1408F3820 (EtwpCoverageResetWorkItemCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012B1C4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1406BD290 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1408F32C8 (EtwpCoverageFreeStringBuffers.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  struct _KTHREAD *result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140427FAC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140427FA8 )
        dword_140427FA8 = TelemetryCoverageStringHashInternal(off_140427FA0, &v7);
      EtwTelemetryCoverageReport((__int64)&off_140427FA0);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (a2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (a2 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        EtwpCoverageFlushPending((int **)a1);
        memset((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        EtwpCoverageFreeStringBuffers(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v5 + 2) & 1) == 0 )
          MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
    }
  }
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == result )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    return (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
