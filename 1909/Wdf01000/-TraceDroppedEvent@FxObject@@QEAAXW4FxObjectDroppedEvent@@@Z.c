/*
 * XREFs of ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C00045F0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0005650 (imp_WdfRegistryOpenKey.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008750 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C144 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C668 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C005D8F4 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C005D980 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::TraceDroppedEvent(FxObject *this, unsigned int Event)
{
  const void *v2; // r8

  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    v2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v2 = 0LL;
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v2, this->m_ObjectState, Event);
  }
}
