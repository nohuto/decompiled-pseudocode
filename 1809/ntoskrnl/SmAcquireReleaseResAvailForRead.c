/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x14014B30C
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014C920 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140175F1C (MmStoreChargeResidentAvailableForRead.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ecx

  if ( a3 )
  {
    if ( qword_14055C178 == a1 )
      _InterlockedExchange64(&qword_14055C178, 0LL);
    else
      MiReturnResidentAvailable(a2 + 48);
    return 1;
  }
  else
  {
    v5 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v5 )
    {
      if ( qword_14055C178 )
        return 0;
      v5 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_14055C178, a1, 0LL) )
        return 0;
    }
  }
  return v5;
}
