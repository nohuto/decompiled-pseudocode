/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140145690
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140145638 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140145660 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401461EC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     MmStoreDecommitVirtualMemory @ 0x1401580BC (MmStoreDecommitVirtualMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r14
  __int64 result; // rax
  _QWORD v12[6]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(unsigned int *)(a1 + 6208);
  v6 = (__int64 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v7 = *v6;
  v8 = *v6 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v8 )
    return 1075380276LL;
  v9 = a3 & 1;
  if ( (v7 & 0x4000) != 0 )
    *(_WORD *)v6 = v7 & 0xBFFF;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v6, v9);
  if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v8, v5);
  if ( *(__int16 *)v6 < 0 )
    return 3221225646LL;
  v10 = *v6;
  *v6 = 0LL;
  memset(v12, 0, 0x28uLL);
  v12[0] = v8;
  v12[1] = v5;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
             a1,
             3LL,
             v12,
             v9 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v6 = v10;
  return result;
}
