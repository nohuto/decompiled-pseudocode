/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14014867C
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401439E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140148020 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140148350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1401620CC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14031FF8C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140320348 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140322578 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400D7A30 (SmAcquireReleaseCharges.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14014885C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140148BFC (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140161AC4 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
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
  volatile signed __int16 *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rsi
  signed __int16 v12; // di
  __int64 v13; // r12
  int v14; // edx
  signed __int16 v15; // bx
  bool v16; // zf
  signed __int16 v17; // ax
  __int64 v19; // rdx
  __int64 VirtualLockedRegion; // rax
  int v21; // r8d
  __int64 v22; // rdi
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-28h]
  _OWORD v28[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 6216);
  v7 = *(unsigned int *)(a1 + 6208);
  v29 = v7;
  v9 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v10 = *(_QWORD *)v9 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v11 = 0LL;
    if ( (*v9 & 0x4000) != 0 )
    {
      *v9 &= ~0x4000u;
      return v11;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0LL) )
      return v11;
    return 3LL;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v9, 0x8000u);
    }
    else
    {
      v11 = 2LL;
      if ( (a5 & 2) == 0 )
      {
        v12 = *v9;
        v13 = 1LL;
        if ( (*v9 & 0x1FFF) != 0x1FFF )
        {
          while ( 1 )
          {
            v14 = 0;
            v15 = v12 ^ (v12 ^ (v12 + 1)) & 0x1FFF;
            if ( (v12 & 0x1FFF) == 0 )
            {
              v14 = SmAcquireReleaseCharges(v7, 1, 0);
              if ( !v14 )
              {
                if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6472) )
                  return v11;
                v15 = v15 & 0xC000 | 0x2000;
              }
              v7 = v29;
            }
            v17 = _InterlockedCompareExchange16(v9, v15, v12);
            v16 = v12 == v17;
            v12 = v17;
            if ( v16 )
              return v10 + a3;
            if ( v14 )
              SmAcquireReleaseCharges(v7, 1, 1);
            if ( (v12 & 0x1FFF) == 0x1FFF )
              break;
            v7 = v29;
          }
        }
        return v13;
      }
    }
    return v10 + a3;
  }
  v19 = *(_QWORD *)(a1 + 6560);
  if ( v19 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v19, 0LL) )
    return 0LL;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
  DWORD1(v28[1]) &= v21;
  v13 = (unsigned int)(v21 + 1);
  *(_QWORD *)(a1 + 6560) = v9;
  v22 = VirtualLockedRegion;
  v27 = v29;
  v26 = v10;
  LODWORD(v28[0]) = v23;
  *(_OWORD *)((char *)v28 + 4) = 0LL;
  if ( ((unsigned __int8)a5 & (unsigned __int8)(v21 + 1)) != 0 )
    DWORD1(v28[0]) |= v13;
  v24 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4LL, &v26);
  if ( v24 < 0 )
  {
    if ( v24 != -1073741536 )
    {
      *(_QWORD *)(a1 + 6560) = 0LL;
      return 0LL;
    }
    return 3LL;
  }
  *(_QWORD *)(a1 + 6560) = 0LL;
  if ( SLODWORD(v28[1]) < 0 )
  {
    v11 = 0LL;
    if ( LODWORD(v28[1]) == -1073740749 )
    {
      *v9 |= 0x4000u;
      return v13;
    }
  }
  else
  {
    *(_QWORD *)v22 = *((_QWORD *)&v28[0] + 1);
    *(_QWORD *)v9 |= 0x8000000000000000uLL;
    v25 = *(_QWORD *)(a1 + 6552);
    if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v25 + 16), a2);
    v11 = *(_QWORD *)(*(_QWORD *)v22 + 24LL);
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 )
    {
      v26 = v10;
      v27 = v29;
      memset(v28, 0, 24);
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6LL, &v26);
    }
  }
  return v11;
}
