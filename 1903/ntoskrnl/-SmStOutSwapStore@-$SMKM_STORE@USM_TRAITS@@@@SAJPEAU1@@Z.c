/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401434A4
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1400F0D5C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105E9C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140143858 (SmPerformStoreSwapOperation.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140147FDC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401486CC (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmArrayGrow @ 0x1401534F0 (SmArrayGrow.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r15d
  _DWORD *v3; // r14
  unsigned int v4; // r12d
  __int64 v6; // r13
  int v7; // r8d
  int v8; // r9d
  unsigned int *v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r10d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  _DWORD *v14; // r11
  _DWORD *v15; // r8
  int v16; // edx
  __int64 v17; // r10
  unsigned int v18; // ecx
  unsigned int i; // eax
  unsigned int v20; // r15d
  __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // r8d
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  _DWORD *v27; // r8
  int v28; // ebx
  struct _KTHREAD *v29; // rax
  _DWORD *v30; // rsi
  __int64 v31; // r14
  int v33; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  PVOID v35; // [rsp+38h] [rbp-30h]
  __int64 v36; // [rsp+40h] [rbp-28h]
  PVOID v37; // [rsp+48h] [rbp-20h]
  __int64 v38; // [rsp+50h] [rbp-18h]
  int v39; // [rsp+B0h] [rbp+48h] BYREF
  int v40; // [rsp+B8h] [rbp+50h]
  __int64 v41; // [rsp+C0h] [rbp+58h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v36 = 0LL;
  v2 = 0;
  v37 = 0LL;
  v3 = 0LL;
  v38 = 0LL;
  v4 = 0;
  v35 = 0LL;
  P = 0LL;
  v6 = -1LL;
  PoolWithTag = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v9 = *(unsigned int **)(a1 + 6552);
  if ( (unsigned __int64)v9 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v28 = -1073700861;
    goto LABEL_41;
  }
  if ( v9 != (unsigned int *)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)(a1 + 6552),
                               -1LL,
                               (signed __int64)v9) )
    return (unsigned int)-1073700861;
  if ( *(_QWORD *)v9 )
  {
    v6 = (__int64)v9;
    v28 = -1073741791;
    goto LABEL_47;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v35 = v9;
  v40 = 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 0x77536D73u);
  if ( !PoolWithTag )
  {
    v28 = -1073741670;
    goto LABEL_59;
  }
  v39 = 0;
LABEL_6:
  while ( 1 )
  {
    v11 = v9[2];
    if ( v11 <= v1 )
      break;
    v12 = *((_QWORD *)v9 + 2);
    v13 = v1;
    v14 = (_DWORD *)(v12 + 4 * ((unsigned __int64)(v11 - 1) >> 5));
    v15 = (_DWORD *)(v12 + 4 * ((unsigned __int64)v1 >> 5));
    if ( v15 != v14 )
    {
      v26 = v1 & 0x1F;
      if ( (*v15 | dword_14037C7E0[v26]) == -1 )
      {
        v13 = v1 - v26 + 32;
        for ( ++v15; v15 < v14 && *v15 == -1; ++v15 )
          v13 += 32;
      }
    }
    for ( ; v13 < v11; ++v13 )
    {
      if ( !_bittest(*((const signed __int32 **)v9 + 2), v13) )
        break;
    }
    v16 = 0;
    if ( v15 != v14 )
    {
      v17 = v13 & 0x1F;
      if ( (*v15 & ~dword_14037C7E0[v17]) == 0 )
      {
        v16 = 32 - v17;
        if ( (_DWORD)v17 == 33 )
          goto LABEL_17;
        v27 = v15 + 1;
        while ( v27 < v14 && !*v27 )
        {
          ++v27;
          v16 += 32;
          if ( v16 == -1 )
            goto LABEL_17;
        }
      }
    }
    v18 = v9[2];
    for ( i = v16 + v13; i < v18; ++v16 )
    {
      if ( _bittest(*((const signed __int32 **)v9 + 2), i) )
        break;
      if ( v16 == -1 )
        break;
      ++i;
    }
LABEL_17:
    v1 = v13;
    if ( !v16 )
      break;
    v20 = v16 + v13;
    if ( v13 < v16 + v13 )
    {
      v21 = 8LL * v13;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v21 + *(_QWORD *)(a1 + 6216)) & 0x7FFFFFFFFFFF0000LL) != 0 )
        {
          v41 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v13, 4);
          if ( !(unsigned int)SmArrayGrow(v4, v22, &v39, &P) )
          {
            SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v23, v13, v33, 2);
            v2 = v40;
            v28 = -1073741670;
            goto LABEL_40;
          }
          v24 = P;
          *((_DWORD *)PoolWithTag + v4) = v1;
          v25 = 2LL * v4++;
          v24[v25] = v41;
          v24[v25 + 1] = *(unsigned int *)(a1 + 6208);
        }
        ++v1;
        v21 += 8LL;
        if ( v1 >= v20 )
          goto LABEL_6;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v2 = 0;
  if ( v4 )
  {
    v37 = P;
    v36 = 0LL;
    v38 = v4;
    v28 = SmPerformStoreSwapOperation(1LL);
    if ( v28 >= 0 )
    {
      v6 = (__int64)v9;
      *(_QWORD *)v9 = v36;
      v28 = 0;
      v35 = 0LL;
    }
LABEL_40:
    v3 = PoolWithTag;
LABEL_41:
    if ( v4 )
    {
      if ( !v2 )
      {
        v29 = KeGetCurrentThread();
        v2 = 1;
        --v29->SpecialApcDisable;
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      }
      v30 = v3;
      v31 = v4;
      do
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v30++, v7, v8, v33, 2);
        --v31;
      }
      while ( v31 );
    }
    if ( !v2 )
    {
LABEL_47:
      if ( v6 != -1 )
        goto LABEL_48;
      goto LABEL_49;
    }
LABEL_59:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_47;
  }
  v28 = -1073741607;
LABEL_48:
  _InterlockedExchange64((volatile __int64 *)(a1 + 6552), v6);
LABEL_49:
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v28;
}
