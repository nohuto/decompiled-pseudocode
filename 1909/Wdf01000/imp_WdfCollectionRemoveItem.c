/*
 * XREFs of imp_WdfCollectionRemoveItem @ 0x1C00619D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0061614 (WPP_IFR_SF_dqdd.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C006414C (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C00641C8 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

void __fastcall imp_WdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v6; // r8
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v8; // r8
  FxCollection *v9; // r9
  FxObject *m_Object; // rbx
  int v11; // edi
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+88h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  m_Globals = pCollection->m_Globals;
  FxNonPagedObject::Lock(pCollection, &irql, v6);
  Entry = FxCollectionInternal::FindEntry(&pCollection->FxCollectionInternal, Index);
  if ( Entry )
  {
    m_Object = Entry->m_Object;
    FxCollectionInternal::CleanupEntry(&v9->FxCollectionInternal, Entry);
    v9 = pCollection;
    v11 = 0;
  }
  else
  {
    m_Object = 0LL;
    v11 = -1073741275;
  }
  FxNonPagedObject::Unlock(v9, irql, v8);
  if ( m_Object )
    m_Object->Release(
      m_Object,
      &pCollection->FxCollectionInternal,
      127,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( v11 < 0 )
  {
    WPP_IFR_SF_dqdd(
      m_Globals,
      pCollection->m_Count,
      2u,
      0xCu,
      WPP_FxCollectionApi_cpp_Traceguids,
      Index,
      Collection,
      pCollection->m_Count,
      v11);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
