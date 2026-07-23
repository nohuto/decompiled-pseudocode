/*
 * XREFs of ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156940
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1401760F8 (MiStoreCheckCompleteWriteBatch.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140302804 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(_SLIST_HEADER *a1, int a2)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  if ( a2 || LOWORD(a1->Alignment) )
  {
    v2 = RtlpInterlockedFlushSList(a1);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
