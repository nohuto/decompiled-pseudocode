/*
 * XREFs of ExpGetSubscriptionPfn @ 0x14090C6D4
 * Callers:
 *     sub_1406AB150 @ 0x1406AB150 (sub_1406AB150.c)
 *     ExActivateVMWithSubscription @ 0x14090BC4C (ExActivateVMWithSubscription.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     sub_1400FA510 @ 0x1400FA510 (sub_1400FA510.c)
 *     _local_unwind @ 0x14019F910 (_local_unwind.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSubscriptionPfn(PVOID *a1)
{
  unsigned int v2; // r14d
  PVOID v3; // rax
  int v5; // r15d
  char v6; // bl
  _OWORD *PoolWithTag; // rcx
  __int64 v8; // [rsp+0h] [rbp-88h] BYREF
  int v9; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  __int64 *v11; // [rsp+40h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+10h] BYREF
  struct _KTHREAD *v13; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  v11 = &v8;
  v9 = 0;
  P = 0LL;
  v2 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( ExpSubscriptionPfnInitialized )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x82uLL, 0x20534C53u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741595;
      local_unwind(v11, &loc_14090C78C);
    }
    *PoolWithTag = ExpSubscriptionPfn;
    PoolWithTag[1] = *((_OWORD *)&ExpSubscriptionPfn + 1);
    PoolWithTag[2] = *((_OWORD *)&ExpSubscriptionPfn + 2);
    PoolWithTag[3] = *((_OWORD *)&ExpSubscriptionPfn + 3);
    PoolWithTag[4] = *((_OWORD *)&ExpSubscriptionPfn + 4);
    PoolWithTag[5] = *((_OWORD *)&ExpSubscriptionPfn + 5);
    PoolWithTag[6] = *((_OWORD *)&ExpSubscriptionPfn + 6);
    PoolWithTag[7] = *((_OWORD *)&ExpSubscriptionPfn + 7);
    *((_WORD *)PoolWithTag + 64) = *((_WORD *)&ExpSubscriptionPfn + 64);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  }
  else
  {
    v9 = sub_1400FA510((__int64)&qword_140947838, 0LL, 0LL, 0, (__int64)&NumberOfBytes);
    if ( v9 == -1073741789 )
    {
      v2 = NumberOfBytes;
      v3 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      P = v3;
      if ( !v3 || v2 > 0x82 )
      {
        v9 = -1073741595;
        goto LABEL_7;
      }
      v9 = sub_1400FA510((__int64)&qword_140947838, 0LL, (__int64)v3, v2, (__int64)&NumberOfBytes);
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    if ( !ExpSubscriptionPfnInitialized )
    {
      v5 = v9;
      if ( v9 >= 0 )
        memmove(&ExpSubscriptionPfn, P, v2);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
        ExpSubscriptionPfnInitialized = 1;
    }
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a1 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
