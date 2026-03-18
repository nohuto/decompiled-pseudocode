/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C00641C8
 * Callers:
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C005EB90 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C005EF90 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C005F230 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C005F3B0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C00619D0 (imp_WdfCollectionRemoveItem.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0063EEC (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00641F8 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxCollectionInternal::FindEntry(FxCollectionInternal *this, unsigned int Index)
{
  int v2; // r8d
  _LIST_ENTRY *p_m_ListHead; // rcx
  _LIST_ENTRY *Flink; // rax

  if ( Index < this->m_Count )
  {
    v2 = 0;
    p_m_ListHead = &this->m_ListHead;
    Flink = p_m_ListHead->Flink;
    while ( Flink != p_m_ListHead )
    {
      if ( v2 == Index )
        return &Flink[-1].Blink;
      Flink = Flink->Flink;
      ++v2;
    }
  }
  return 0LL;
}
