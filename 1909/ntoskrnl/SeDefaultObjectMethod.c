/*
 * XREFs of SeDefaultObjectMethod @ 0x1405C7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1405C5F80 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C7140 (ObSetSecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x1405C7D10 (ObLogSecurityDescriptor.c)
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
  __int64 v13; // rbx
  char v14; // di
  unsigned int v15; // edi
  volatile signed __int64 *v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v22; // rbp
  volatile signed __int64 *v23; // r14
  signed __int64 v24; // rax
  volatile signed __int64 *i; // rcx
  __int64 v26; // [rsp+30h] [rbp-28h]

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
        if ( v26 )
          *(a1 - 1) = v26 + 15;
        else
          *(a1 - 1) = 0LL;
      }
      return (unsigned int)v12;
    }
    else
    {
      *(a1 - 1) = 0LL;
      return 0LL;
    }
  }
  else
  {
    v13 = *a6;
    v14 = *a6;
    *a6 = 0LL;
    v15 = (v14 & 0xF) + 1;
    v16 = (volatile signed __int64 *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw((const void *)(v16 + 1));
    v17 = *((_QWORD *)v16 + 1);
    v18 = v17 - v15;
    if ( v18 <= 0 )
    {
LABEL_15:
      if ( v18 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v22 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v16 + 4));
      --CurrentThread->KernelApcDisable;
      v23 = v22 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v22, 0LL);
      v24 = _InterlockedExchangeAdd64(v16 + 1, -v15) - v15;
      if ( v24 > 0 )
      {
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        if ( v24 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v23; i != v16; i = (volatile signed __int64 *)*i )
          v23 = i;
        *v23 = *v16;
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExFreePoolWithTag((PVOID)v16, 0x6353624Fu);
      }
    }
    else
    {
      while ( 1 )
      {
        v19 = v17;
        v17 = _InterlockedCompareExchange64(v16 + 1, v18, v17);
        if ( v19 == v17 )
          break;
        v18 = v17 - v15;
        if ( v18 <= 0 )
          goto LABEL_15;
      }
    }
    return 0LL;
  }
}
