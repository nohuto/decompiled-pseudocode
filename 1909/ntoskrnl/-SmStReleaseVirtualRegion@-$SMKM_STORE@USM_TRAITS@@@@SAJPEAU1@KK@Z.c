/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1401619B4
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401618D0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140322578 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14014885C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14015AB48 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140161AC4 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     MmStoreDecommitVirtualMemory @ 0x140167834 (MmStoreDecommitVirtualMemory.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // r14
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-28h]

  v3 = *(unsigned int *)(a1 + 6208);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v7 = *v6 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v7 )
    return 1075380276LL;
  v8 = a3 & 1;
  if ( (*(_WORD *)v6 & 0x4000) != 0 )
    *(_WORD *)v6 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v6, a3 & 1);
  if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v7, v3);
  if ( *(__int16 *)v6 < 0 )
    return 3221225646LL;
  v9 = *v6;
  *v6 = 0LL;
  v13 = 0LL;
  v11[0] = v7;
  v11[1] = v3;
  v12 = 0LL;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3, (__int64)v11, v8 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v6 = v9;
  return result;
}
