/*
 * XREFs of ExpSetKernelDataProtection @ 0x1406A315C
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406A2320 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406A3340 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x14090B980 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14090BBC0 (ExSetLicenseTamperState.c)
 *     sub_14090C670 @ 0x14090C670 (sub_14090C670.c)
 *     sub_14090C800 @ 0x14090C800 (sub_14090C800.c)
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_1406A3720 @ 0x1406A3720 (sub_1406A3720.c)
 *     sub_1407803CC @ 0x1407803CC (sub_1407803CC.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE688, 0LL);
  if ( qword_1409AE6E8 )
  {
    v16 = *(_DWORD **)qword_1409AE6E8;
    v13 = sub_1406A3720(&v16);
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
      v13 = sub_1407803CC(v8);
      if ( v13 >= 0 )
      {
        qword_1409AE6E8 = v9;
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
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE688, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE688);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE688);
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
