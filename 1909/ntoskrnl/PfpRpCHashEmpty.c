/*
 * XREFs of PfpRpCHashEmpty @ 0x14077FD0C
 * Callers:
 *     PfpRpControlRequestReset @ 0x14077FCB4 (PfpRpControlRequestReset.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  int v3; // r10d
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+20h] [rbp-28h]

  v3 = -1;
  v6 = 1 << *(_DWORD *)(a2 + 8);
  v7 = v6;
  if ( v6 )
  {
    do
    {
      ++v3;
      v7 >>= 1;
    }
    while ( v7 );
  }
  v8 = v3 + 1;
  if ( ((v6 - 1) & v6) == 0 )
    v8 = v3;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = v8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v11 = KeGetCurrentThread();
  v12 = *(void **)a2;
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  *(_OWORD *)a2 = v13;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
