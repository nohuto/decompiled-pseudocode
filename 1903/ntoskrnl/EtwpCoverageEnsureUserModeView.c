/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x1406D654C
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406D64C0 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x14067A6E0 (MmMapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // bl
  int v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v12; // [rsp+A8h] [rbp+20h]

  v11 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = Process;
  v2 = Process[1].ActiveProcessors.Bitmap[0];
  v10[1] = v2;
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v8 = 0;
  }
  else
  {
    v10[0] = 0LL;
    v9 = 0LL;
    v8 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, (__int64 *)&v11, 0LL, 0LL, v10, &v9, 1, 0, 2);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v11;
        v11 = 0LL;
      }
      v4 = 0LL;
      v5 = (__int64 *)Process[1].ActiveProcessors.Bitmap[6];
      if ( v5 )
        v4 = *v5;
      if ( v4 )
        *(_DWORD *)(v4 + 1116) = *(_DWORD *)(v2 + 1952);
      v8 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v11 )
    MiUnmapViewOfSection((ULONG_PTR)Process, v11, 0, 0);
  return (unsigned int)v8;
}
