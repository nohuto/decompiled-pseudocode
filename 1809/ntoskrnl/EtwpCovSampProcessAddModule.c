/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x1408C817C
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408C872C (EtwpCovSampProcessRemoveModule.c)
 */

__int64 __fastcall EtwpCovSampProcessAddModule(PVOID **a1, PVOID *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // r15
  volatile signed __int64 *v10; // rbp
  int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // esi
  struct _KTHREAD *v17; // rax
  PVOID *v18; // rax
  unsigned int v19; // esi
  PVOID *v20; // rsi
  PVOID *v21; // rdx

  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 1);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 1), 0LL);
  a1[2] = (PVOID *)KeGetCurrentThread();
  if ( !*a1 )
  {
    ObfReferenceObject(*a2);
    *a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x10000) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
      v13 = *((_DWORD *)a1 + 9);
      v14 = v12;
      v15 = *((_DWORD *)a1 + 8);
      if ( v15 < v13 )
        break;
      v16 = 2 * v13;
      if ( !v13 )
        v16 = 16;
      a1[2] = 0LL;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x56777445u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v16, 0x56777445u);
      if ( !PoolWithTag )
      {
        v19 = -1073741670;
        goto LABEL_30;
      }
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      a1[2] = (PVOID *)KeGetCurrentThread();
      if ( v16 > *((_DWORD *)a1 + 9) )
      {
        v18 = a1[3];
        if ( v18 )
        {
          memmove(PoolWithTag, a1[3], 16LL * *((unsigned int *)a1 + 8));
          v18 = a1[3];
        }
        a1[3] = (PVOID *)PoolWithTag;
        PoolWithTag = v18;
        *((_DWORD *)a1 + 9) = v16;
      }
      if ( (unsigned int)++v11 >= 0x14 )
      {
        v19 = -1073741823;
        goto LABEL_30;
      }
    }
    v20 = &a1[3][2 * v14];
    if ( v15 > (unsigned int)v14 )
    {
      memmove(v20 + 2, &a1[3][2 * v14], 16LL * (v15 - (unsigned int)v14));
      v15 = *((_DWORD *)a1 + 8);
    }
    *((_DWORD *)a1 + 8) = v15 + 1;
    *v20 = (PVOID)(a4 + *(_QWORD *)(a3 + 40));
    v21 = *a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a3 + 64)) <= 1 )
      __fastfail(0xEu);
    if ( *(_QWORD *)(a3 + 64) == 2LL && !*(_DWORD *)(a3 + 132) )
      _InterlockedAdd((volatile signed __int32 *)v21 + 277, 0xFFFFFFFF);
    v20[1] = (PVOID)a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v19 = 0;
LABEL_30:
  if ( a1[2] == (PVOID *)KeGetCurrentThread() )
  {
    a1[2] = 0LL;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v19;
}
