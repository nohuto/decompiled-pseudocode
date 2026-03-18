/*
 * XREFs of ExpSetKernelDataProtection @ 0x1405A15F4
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A0888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1408CE960 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1408CEB70 (ExSetLicenseTamperState.c)
 *     sub_1408CF4C0 @ 0x1408CF4C0 (sub_1408CF4C0.c)
 *     sub_1408CF630 @ 0x1408CF630 (sub_1408CF630.c)
 *     ExInitLicenseData @ 0x1409C43A0 (ExInitLicenseData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     sub_1405A1BD4 @ 0x1405A1BD4 (sub_1405A1BD4.c)
 *     sub_140758068 @ 0x140758068 (sub_140758068.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  _DWORD *PoolWithTag; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  char v10; // al
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-28h]
  PVOID P; // [rsp+28h] [rbp-20h]
  PVOID v15; // [rsp+30h] [rbp-18h]
  _DWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v11 = -1073741811;
    goto LABEL_26;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v11 = 0;
    goto LABEL_26;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096E5A0, 0LL);
  if ( qword_14096E620 )
  {
    v16 = *(_DWORD **)qword_14096E620;
    v13 = sub_1405A1BD4(&v16);
    if ( v13 >= 0 )
    {
      PoolWithTag = v16;
LABEL_7:
      if ( (a2 & 1) != 0 )
        *(_QWORD *)PoolWithTag = *(_QWORD *)a1;
      if ( (a2 & 2) != 0 )
        PoolWithTag[2] = *(_DWORD *)(a1 + 8);
      if ( (a2 & 4) != 0 )
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(a1 + 16);
      if ( (a2 & 8) != 0 )
        *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a1 + 24);
      if ( (a2 & 0x10) != 0 )
        *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 32);
      if ( (a2 & 0x20) != 0 )
        *((_BYTE *)PoolWithTag + 40) = *(_BYTE *)(a1 + 40);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
    P = PoolWithTag;
    if ( PoolWithTag && (v8 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v9 = (__int64)v8, (v15 = v8) != 0LL) )
    {
      *v8 = PoolWithTag;
      v16 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v13 = sub_140758068(v8);
      if ( v13 >= 0 )
      {
        qword_14096E620 = v9;
        P = 0LL;
        v15 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = -1073741801;
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096E5A0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096E5A0);
  KeAbPostRelease((ULONG_PTR)&qword_14096E5A0);
  v11 = v13;
  v5 = P;
  v6 = v15;
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}
