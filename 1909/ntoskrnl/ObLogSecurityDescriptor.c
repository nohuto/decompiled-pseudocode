/*
 * XREFs of ObLogSecurityDescriptor @ 0x1405C7D10
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1405C7140 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1405C7AB0 (SeDefaultObjectMethod.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     EtwpAllocGuidEntry @ 0x140694070 (EtwpAllocGuidEntry.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406A9F68 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406CEAB4 (ObAssignObjectSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14071B784 (IopSetDeviceSecurityDescriptor.c)
 *     ObpInitObjectTypeSD @ 0x14075E94C (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408FFB9C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     ObpCreateCacheEntry @ 0x1405C8004 (ObpCreateCacheEntry.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Src, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  char *v5; // r9
  char *v6; // r10
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *CacheEntry; // r15
  signed __int64 *v10; // rsi
  volatile signed __int64 *v11; // r14
  signed __int64 v12; // rdi
  ULONG v14; // [rsp+80h] [rbp+8h]

  v14 = RtlLengthSecurityDescriptor(Src);
  v4 = 0LL;
  v5 = Src;
  v6 = &Src[v14 & 0xFFFFFFF8];
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
      CacheEntry = (signed __int64 *)ObpCreateCacheEntry(Src, v14);
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
  while ( *(_QWORD *)(v12 + 16) != v4 )
  {
    if ( *(_QWORD *)(v12 + 16) > v4 )
      goto LABEL_9;
LABEL_8:
    v11 = (volatile signed __int64 *)v12;
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 24) != v14 || memcmp(Src, (const void *)(v12 + 32), v14) )
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
