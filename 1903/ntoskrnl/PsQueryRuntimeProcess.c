/*
 * XREFs of PsQueryRuntimeProcess @ 0x1405D3830
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 *     PspSetJobTimeLimitCallback @ 0x1408C8610 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v5; // rbp
  unsigned int v6; // edi
  int v7; // esi
  _QWORD **v8; // rbx
  _QWORD *i; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1760);
  ExAcquirePushLockSharedEx(a1 + 1760, 0LL);
  v6 = *(_DWORD *)(a1 + 628);
  v7 = *(_DWORD *)(a1 + 632);
  v8 = (_QWORD **)(a1 + 1160);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v6 += *((_DWORD *)i - 267);
    v7 += *((_DWORD *)i - 247);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = v6;
  *a2 = v7;
  return result;
}
