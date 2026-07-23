/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1401760F8
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156940 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1144) )
  {
    if ( !*(_DWORD *)(a1 + 1164) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14055BF40, 0);
  }
}
