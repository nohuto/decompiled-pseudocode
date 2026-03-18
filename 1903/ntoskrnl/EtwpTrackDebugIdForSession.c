/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x14073463C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140734520 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbp
  SIZE_T v4; // r15
  __int64 *v7; // r14
  __int64 *i; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  v4 = a3;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 340)) <= *(_DWORD *)(a1 + 4) )
  {
    v7 = (__int64 *)(a1 + 112);
    for ( i = *(__int64 **)(a1 + 112); i != v7; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_8;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v4 + 24), 0x62777445u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 340) += v4;
      PoolWithTag[5] = v4;
      memmove(PoolWithTag + 6, a2, v4);
      v12 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v11 = v12;
      *((_QWORD *)v11 + 1) = v7;
      *(_QWORD *)(v12 + 8) = v11;
      *v7 = (__int64)v11;
      *((_BYTE *)v11 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
