/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C005E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0063B80 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  FxCmResList *v4; // rsi
  unsigned __int8 v5; // r8
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v7; // r8
  char *v8; // rbx
  FxObject *m_Object; // rdi
  int m_Globals; // ecx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList);
  v4 = pList;
  FxNonPagedObject::Lock(pList, &PreviousIrql, v5);
  Entry = FxCollectionInternal::FindEntry(&v4->FxCollectionInternal, Index);
  v8 = 0LL;
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v4, PreviousIrql, v7);
  if ( m_Object )
  {
    m_Globals = (int)m_Object[1].m_Globals;
    v8 = (char *)&m_Object[1].m_Globals + 4;
    *(_OWORD *)((char *)&m_Object[1].m_Globals + 4) = *(_OWORD *)&m_Object[1].__vftable;
    HIDWORD(m_Object[1].m_ChildListHead.Flink) = m_Globals;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v8;
}
