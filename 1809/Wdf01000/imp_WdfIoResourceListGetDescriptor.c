/*
 * XREFs of imp_WdfIoResourceListGetDescriptor @ 0x1C005EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0063B80 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

_LIST_ENTRY *__fastcall imp_WdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  FxObject *m_Object; // rbx
  _LIST_ENTRY *result; // rax
  MxLock v10; // xmm1
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pList->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !m_Object )
    return 0LL;
  result = &m_Object[1].m_ChildListHead;
  v10 = *(MxLock *)&m_Object[1].m_Globals;
  m_Object[1].m_ChildListHead = *(_LIST_ENTRY *)&m_Object[1].__vftable;
  m_Object[1].m_SpinLock = v10;
  return result;
}
