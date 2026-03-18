/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0057478
 * Callers:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C005757C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x1C00576D0 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D41C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxDisposeList::DrainListLocked(FxDisposeList *this, unsigned __int8 *PreviousIrql)
{
  _SINGLE_LIST_ENTRY *p_m_List; // rbx
  FxObject *v5; // rbp
  unsigned __int8 v6; // r8
  _SINGLE_LIST_ENTRY *Next; // r8

  p_m_List = &this->m_List;
  while ( 1 )
  {
    Next = p_m_List->Next;
    if ( !p_m_List->Next )
      break;
    v5 = (FxObject *)&Next[-11];
    p_m_List->Next = Next->Next;
    Next->Next = 0LL;
    if ( !p_m_List->Next )
      this->m_ListEnd = &p_m_List->Next;
    FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)Next);
    FxObject::DeferredDisposeWorkItem(v5);
    FxNonPagedObject::Lock(this, PreviousIrql, v6);
  }
}
