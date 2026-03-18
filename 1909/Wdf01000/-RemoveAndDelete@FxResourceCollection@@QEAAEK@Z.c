/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0063EEC
 * Callers:
 *     imp_WdfCmResourceListRemove @ 0x1C005EC40 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceListRemove @ 0x1C005F040 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C005F460 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C00641C8 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0064228 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  const void *v5; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  bool v7; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObject *m_Object; // rbx
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 2) == 0 )
  {
    v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    p_m_Globals = &this->m_Globals;
    v7 = this->m_ObjectSize == 0;
    m_Globals = this->m_Globals;
    if ( v7 )
      v5 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, v5, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 0;
  }
  m_Object = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  Entry = FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
  if ( Entry )
  {
    this->m_Changed = 1;
    m_Object = Entry->m_Object;
    FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
  }
  FxNonPagedObject::Unlock(this, irql, v12);
  if ( !m_Object )
    return 0;
  m_Object->DeleteObject(m_Object);
  return 1;
}
