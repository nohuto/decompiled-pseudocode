/*
 * XREFs of ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00573C8
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002390 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0003880 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005D8F8 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C00582F4 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall FxDisposeList::Add(FxDisposeList *this, FxObject *Object, unsigned __int8 a3)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  Next = this->m_List.Next;
  *this->m_ListEnd = &Object->m_DisposeSingleEntry;
  this->m_ListEnd = &Object->m_DisposeSingleEntry.Next;
  if ( !Next )
    FxSystemWorkItem::EnqueueWorker(this->m_SystemWorkItem, FxDisposeList::_WorkItemThunk, this, 0);
  FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Next);
}
