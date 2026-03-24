/*
 * XREFs of ExpGetSubscriptionPfn @ 0x1408CF084
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1405A0260 (ExQueryLicenseValueInternal.c)
 *     ExActivateVMWithSubscription @ 0x1408CE688 (ExActivateVMWithSubscription.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A79C0 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpGetSubscriptionPfn(_QWORD *a1)
{
  int v2; // edi
  PVOID PoolWithTag; // r14
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( !ExpSubscriptionPfnInitialized )
  {
    v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_140909138, 0LL, 0LL, 0, &NumberOfBytes, &v7);
    if ( v2 == -1073741789 )
    {
      v4 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      if ( !PoolWithTag || v4 > 0x82 )
      {
        v2 = -1073741595;
        goto LABEL_18;
      }
      v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_140909138, 0LL, PoolWithTag, v4, &NumberOfBytes, &v7);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E4E0, 0LL);
    if ( !ExpSubscriptionPfnInitialized )
    {
      if ( v2 >= 0 )
        memmove(&ExpSubscriptionPfn, PoolWithTag, v4);
      if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
        ExpSubscriptionPfnInitialized = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( ExpSubscriptionPfnInitialized )
    *a1 = &ExpSubscriptionPfn;
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v2;
}
