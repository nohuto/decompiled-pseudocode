/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0063B80
 * Callers:
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C005E9F0 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C005EDF0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C005F090 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C005F210 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C00617C0 (imp_WdfCollectionRemoveItem.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C00638A4 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0063BB0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
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
