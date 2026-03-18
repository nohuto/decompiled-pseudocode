/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0056CE0
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x1C003788C (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_PoolLookaside, Pool);
}
