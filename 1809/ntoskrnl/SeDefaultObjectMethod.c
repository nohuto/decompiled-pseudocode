/*
 * XREFs of SeDefaultObjectMethod @ 0x1405CAC30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1405C933C (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C9A30 (ObSetSecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        _QWORD *a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 *a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // ecx
  __int64 v15; // rbx
  char v16; // di
  unsigned int v17; // edi
  volatile signed __int64 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v23; // rbp
  volatile signed __int64 *v24; // r14
  signed __int64 v25; // rax
  volatile signed __int64 *i; // rcx
  __int64 v27; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, (__int64)a6, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo((__int64)a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v12 = ObLogSecurityDescriptor(a4);
      if ( v12 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        if ( v27 )
          *(a1 - 1) = v27 + 15;
        else
          *(a1 - 1) = 0LL;
      }
      return (unsigned int)v12;
    }
    else
    {
      v13 = 0;
      *(a1 - 1) = 0LL;
    }
    return v13;
  }
  else
  {
    v15 = *a6;
    v16 = *a6;
    *a6 = 0LL;
    v17 = (v16 & 0xF) + 1;
    v18 = (volatile signed __int64 *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw((const void *)(v18 + 1));
    v19 = *((_QWORD *)v18 + 1);
    v20 = v19 - v17;
    if ( v20 <= 0 )
    {
LABEL_15:
      if ( v20 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v23 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v18 + 4));
      --CurrentThread->KernelApcDisable;
      v24 = v23 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v23, 0LL);
      v25 = _InterlockedExchangeAdd64(v18 + 1, -v17) - v17;
      if ( v25 > 0 )
      {
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v23);
        KeAbPostRelease((ULONG_PTR)v23);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        if ( v25 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v24; i != v18; i = (volatile signed __int64 *)*i )
          v24 = i;
        *v24 = *v18;
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v23);
        KeAbPostRelease((ULONG_PTR)v23);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExFreePoolWithTag((PVOID)v18, 0x6353624Fu);
      }
    }
    else
    {
      while ( 1 )
      {
        v21 = v19;
        v19 = _InterlockedCompareExchange64(v18 + 1, v20, v19);
        if ( v21 == v19 )
          break;
        v20 = v19 - v17;
        if ( v20 <= 0 )
          goto LABEL_15;
      }
    }
    return 0LL;
  }
}
