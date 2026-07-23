/*
 * XREFs of ObLogSecurityDescriptor @ 0x1405CAE70
 * Callers:
 *     EtwpAllocGuidEntry @ 0x1405C1C8C (EtwpAllocGuidEntry.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C9A30 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1405CAC30 (SeDefaultObjectMethod.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069A6F8 (IopSetDeviceSecurityDescriptor.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406ABEE8 (ObAssignObjectSecurityDescriptor.c)
 *     ObpInitObjectTypeSD @ 0x14072A1CC (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408C42D0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
 *     ObpCreateCacheEntry @ 0x1405CB164 (ObpCreateCacheEntry.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Src, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  char *v5; // r9
  char *v6; // r10
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *CacheEntry; // r12
  signed __int64 *v10; // rbp
  volatile signed __int64 *v11; // rsi
  signed __int64 v12; // rdi
  unsigned __int64 v13; // rax
  ULONG v15; // [rsp+80h] [rbp+8h]

  v15 = RtlLengthSecurityDescriptor(Src);
  v4 = 0LL;
  v5 = Src;
  v6 = &Src[v15 & 0xFFFFFFF8];
  if ( Src < v6 )
  {
    do
    {
      v7 = *(_QWORD *)v5 ^ v4;
      v5 += 16;
      v4 = __ROL8__(v7, 3);
    }
    while ( v5 < v6 );
  }
  CurrentThread = KeGetCurrentThread();
  CacheEntry = 0LL;
  v10 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v4);
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = v10 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 )
      break;
LABEL_9:
    if ( !CacheEntry )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      CacheEntry = (signed __int64 *)ObpCreateCacheEntry(Src, v15);
      if ( !CacheEntry )
        return 3221225626LL;
      --CurrentThread->KernelApcDisable;
      goto LABEL_4;
    }
    *CacheEntry = v12;
    v11 = (volatile signed __int64 *)_InterlockedCompareExchange64(v11, (signed __int64)CacheEntry, v12);
    if ( (volatile signed __int64 *)v12 == v11 )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = CacheEntry + 4;
      return 0LL;
    }
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 == v4 )
      break;
    if ( v13 > v4 )
      goto LABEL_9;
LABEL_8:
    v11 = (volatile signed __int64 *)v12;
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 24) != v15 || memcmp(Src, (const void *)(v12 + 32), v15) )
    goto LABEL_8;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v12 + 32;
  if ( CacheEntry )
    ExFreePoolWithTag(CacheEntry, 0x6353624Fu);
  return 0LL;
}
