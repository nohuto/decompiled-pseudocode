/*
 * XREFs of ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140305EB8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DAF4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14014A2A8 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmEtwLogStoreStateChange @ 0x140307328 (SmEtwLogStoreStateChange.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StEmptyStore(__int64 a1, unsigned int a2)
{
  ULONGLONG *v4; // rax
  __int64 v5; // rdx

  v4 = SmEtwEnabled(0);
  if ( v4 )
    SmEtwLogStoreStateChange(v4, v5, a1, a2);
  if ( *(_DWORD *)(a1 + 5736) )
  {
    *(_DWORD *)(a1 + 5736) = 0;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1992), 6LL, 0xFFFFFFFF, 0xFFFFFFFF);
  }
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 80, 1u);
  if ( a2 )
    ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 2016, 1u);
}
