/*
 * XREFs of PdcNotificationClientRegister @ 0x14089BBA4
 * Callers:
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PdcPortOpen @ 0x140746570 (PdcPortOpen.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientRegister(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v4; // eax
  unsigned int v8; // edi
  char *PoolWithTag; // rax
  char *v11; // rsi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rtt
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  *a4 = 0LL;
  if ( v4 == 1 )
  {
    if ( !*((_QWORD *)a2 + 1) )
      return (unsigned int)-1073741584;
  }
  else if ( v4 != 2 || !*((_QWORD *)a2 + 2) )
  {
    return (unsigned int)-1073741584;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E636450u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    v12 = *(_OWORD *)a2;
    *(_DWORD *)v11 = 1315136592;
    v13 = *((_OWORD *)a2 + 1);
    v14 = (signed __int64 *)(v11 + 8);
    *((_DWORD *)v11 + 8) = 103;
    *(_OWORD *)(v11 + 56) = v12;
    v11[88] = 1;
    *(_OWORD *)(v11 + 72) = v13;
    *((_QWORD *)v11 + 6) = a3;
    v24 = PdcpNotificationClientCallback;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    PdcAcquireRwLockExclusive(v11 + 8);
    v8 = PdcPortOpen(0x67u, 0, (__int64)v11, (__int64 *)&v24, v21, v22, v23, (_QWORD *)v11 + 5);
    if ( v8 )
    {
      *((_QWORD *)v11 + 2) = 0LL;
      _m_prefetchw(v14);
      v15 = *v14;
      v16 = *v14 - 16;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
        ExfReleasePushLock((_QWORD *)v11 + 1);
      KeAbPostRelease((ULONG_PTR)(v11 + 8));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      *a4 = v11;
      *((_QWORD *)v11 + 2) = 0LL;
      _m_prefetchw(v14);
      v18 = *v14;
      v19 = *v14 - 16;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0 || (v20 = *v14, v20 != _InterlockedCompareExchange64(v14, v19, v18)) )
        ExfReleasePushLock((_QWORD *)v11 + 1);
      KeAbPostRelease((ULONG_PTR)(v11 + 8));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v11 = 0LL;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
