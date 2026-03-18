/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400EE2B8
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x1400EE398 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x1400EE990 (KeQueryPriorityThread.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013AE3C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140161F58 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // edi
  struct _KTHREAD *v10; // r15
  KPRIORITY PriorityThread; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rax

  if ( (*(_DWORD *)(a1 + 1840) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition((PEX_SPIN_LOCK)(a1 + 1264));
  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a1, i);
    v6 = v5;
    if ( v5 )
    {
      *(_BYTE *)(v5 + 6022) = a2;
      v7 = *(unsigned __int8 *)(v5 + 6022);
      v8 = *(unsigned __int8 *)(v5 + 6022);
      if ( v7 == 4 )
        v9 = *(_DWORD *)(v6 + 6712);
      else
        v9 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v8];
      v10 = *(struct _KTHREAD **)(v6 + 6200);
      PriorityThread = KeQueryPriorityThread(v10);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v9 )
          KeSetActualBasePriorityThread((__int64)v10, v9);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v6 + 80, v6 + 5976);
      }
      else if ( PriorityThread > (int)v9 )
      {
        KeSetActualBasePriorityThread((__int64)v10, v9);
      }
      v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v6 + 6016) & 0x3FF, v12, v13);
      ExReleaseRundownProtection_0(v14 + 1);
    }
  }
}
