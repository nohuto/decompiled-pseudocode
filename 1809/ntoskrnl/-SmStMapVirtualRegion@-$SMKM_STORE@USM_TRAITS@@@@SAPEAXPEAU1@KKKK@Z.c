/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14014759C (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302A54 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302D78 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140303124 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400E3D84 (SmAcquireReleaseCharges.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140145638 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401461EC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140146584 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rcx
  volatile signed __int16 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r12
  int v11; // edx
  signed __int16 v12; // bx
  signed __int16 v13; // bx
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 VirtualLockedRegion; // rax
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-30h]
  _QWORD v22[5]; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 6216);
  v7 = *(unsigned int *)(a1 + 6208);
  v23 = v7;
  v8 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v14 = 0LL;
    if ( (v9 & 0x4000) != 0 )
    {
      *v8 = v9 & 0xBFFF;
      return v14;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v8, 0) )
      return v14;
    return 3LL;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v8, 0x8000u);
    }
    else if ( (a5 & 2) == 0 )
    {
      if ( (v9 & 0x1FFF) != 0x1FFF )
      {
        while ( 1 )
        {
          v11 = 0;
          v12 = v9 ^ (v9 ^ (v9 + 1)) & 0x1FFF;
          if ( (v9 & 0x1FFF) == 0 )
          {
            v11 = SmAcquireReleaseCharges(v7, 1, 0);
            if ( !v11 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6472) )
                return 2LL;
              v12 = v12 & 0xC000 | 0x2000;
            }
            v7 = v23;
          }
          v13 = _InterlockedCompareExchange16(v8, v12, v9);
          if ( (_WORD)v9 == v13 )
            return v10 + a3;
          if ( v11 )
            SmAcquireReleaseCharges(v7, 1, 1);
          LOWORD(v9) = v13;
          if ( (v13 & 0x1FFF) == 0x1FFF )
            return 1LL;
          v7 = v23;
        }
      }
      return 1LL;
    }
    return v10 + a3;
  }
  v16 = *(_QWORD *)(a1 + 6560);
  v14 = 0LL;
  if ( v16 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v16, 0) )
    return v14;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
  *(_QWORD *)(a1 + 6560) = v8;
  v18 = VirtualLockedRegion;
  memset(v22, 0, sizeof(v22));
  v22[0] = v10;
  v22[1] = v23;
  LODWORD(v22[2]) = (a5 >> 6) & 7;
  if ( (a5 & 1) != 0 )
    HIDWORD(v22[2]) |= 1u;
  v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
          a1,
          4LL,
          v22,
          (a5 & 0x20 | 0x10) >> 2,
          v10);
  if ( v19 < 0 )
  {
    if ( v19 != -1073741536 )
    {
      *(_QWORD *)(a1 + 6560) = 0LL;
      return v14;
    }
    return 3LL;
  }
  *(_QWORD *)(a1 + 6560) = 0LL;
  if ( SLODWORD(v22[4]) < 0 )
  {
    if ( LODWORD(v22[4]) == -1073740749 )
    {
      *v8 |= 0x4000u;
      return 1LL;
    }
  }
  else
  {
    *(_QWORD *)v18 = v22[3];
    *(_QWORD *)v8 |= 0x8000000000000000uLL;
    v20 = *(_QWORD *)(a1 + 6552);
    if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v20 + 16), a2);
    v14 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 )
    {
      memset(v22, 0, sizeof(v22));
      v22[0] = v21;
      v22[1] = v23;
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
        a1,
        6LL,
        v22,
        8LL,
        v21);
    }
  }
  return v14;
}
