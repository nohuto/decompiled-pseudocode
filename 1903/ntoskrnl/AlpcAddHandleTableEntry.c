/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14064BB94
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  PVOID PoolWithTag; // rax
  void *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp
  int v12; // eax

  v2 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = *(_QWORD **)a1;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    *v7 = *a2;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v5, 0x61486C41u);
    v9 = PoolWithTag;
    v10 = -1LL;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 16LL * *(unsigned int *)(a1 + 8));
      memmove(v9, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      v11 = *(unsigned int *)(a1 + 8);
      *((_QWORD *)v9 + v11) = *a2;
      if ( *(_DWORD *)(a1 + 8) == 16 )
        ExFreeToNPagedLookasideList(&stru_140503740, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      v12 = 2 * *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v12;
      v10 = v11 + 16;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v10;
  }
}
