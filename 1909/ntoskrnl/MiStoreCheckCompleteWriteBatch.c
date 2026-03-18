/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x14015BFCC
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x140192C90 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14015B26C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1144) )
  {
    if ( !*(_DWORD *)(a1 + 1164) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14058BF40, 0);
  }
}
