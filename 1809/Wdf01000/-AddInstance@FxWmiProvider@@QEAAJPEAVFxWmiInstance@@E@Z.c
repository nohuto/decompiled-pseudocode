/*
 * XREFs of ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003FF58
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0017414 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003F810 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiInstanceRegister @ 0x1C003FBF0 (imp_WdfWmiInstanceRegister.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C008867C (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0040048 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0041F14 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0042200 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiProvider::AddInstance(
        FxWmiProvider *this,
        FxWmiInstance *Instance,
        unsigned __int8 NoErrorIfPresent)
{
  unsigned __int64 v6; // r10
  const void *v7; // rsi
  int v9; // eax
  unsigned __int8 v10; // r8
  unsigned __int8 updated; // si
  unsigned int v12; // ebp
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+78h] [rbp+20h] BYREF

  if ( (this->m_Flags & 4) != 0 )
  {
    v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    v7 = (const void *)((unsigned __int64)Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Instance->m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, v7, v6, -1073741808);
    return 3221225488LL;
  }
  else
  {
    FxNonPagedObject::Lock(this->m_Parent, &irql, NoErrorIfPresent);
    v9 = FxWmiProvider::AddInstanceLocked(this, Instance, NoErrorIfPresent, &update, AddInstanceToTail);
    updated = update;
    v12 = v9;
    if ( update )
      updated = FxWmiIrpHandler::DeferUpdateLocked(this->m_Parent, irql);
    FxNonPagedObject::Unlock(this->m_Parent, irql, v10);
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(this->m_Parent);
    return v12;
  }
}
