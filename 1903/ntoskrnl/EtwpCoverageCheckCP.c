/*
 * XREFs of EtwpCoverageCheckCP @ 0x1408F31D4
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406D64C0 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageTableLocateInternal @ 0x14012B0B4 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14012B108 (EtwpCoverageValidateCP.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbp
  int v7; // edx
  unsigned int *Internal; // rax
  int v9; // r11d
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((_QWORD *)a2, &v11) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v6 = *(unsigned int **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v6, v7);
    if ( *Internal == v9 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v6[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v4;
}
