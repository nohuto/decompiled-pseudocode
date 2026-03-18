/*
 * XREFs of ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0002710 (imp_WdfMemoryCreate.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0006AD0 (imp_WdfRegistryOpenKey.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008490 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008C30 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     imp_WdfRequestCreate @ 0x1C000A590 (imp_WdfRequestCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005BCE4 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005BF04 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C22C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C005D6C0 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C005D7CC (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
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
