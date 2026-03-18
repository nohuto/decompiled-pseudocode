/*
 * XREFs of ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C003F548
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0015DF4 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00160A8 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     imp_WdfWmiInstanceDeregister @ 0x1C003ED10 (imp_WdfWmiInstanceDeregister.c)
 *     ?Dispose@FxWmiInstance@@UEAAEXZ @ 0x1C003FB90 (-Dispose@FxWmiInstance@@UEAAEXZ.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0089804 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0041164 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0041450 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiProvider::RemoveInstance(FxWmiProvider *this, FxWmiInstance *Instance, unsigned __int8 a3)
{
  unsigned __int8 updated; // si
  unsigned __int8 v6; // r8
  _LIST_ENTRY *p_m_ListEntry; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned int v11; // eax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  updated = 0;
  FxNonPagedObject::Lock(this->m_Parent, &irql, a3);
  p_m_ListEntry = &Instance->m_ListEntry;
  Flink = p_m_ListEntry->Flink;
  if ( p_m_ListEntry->Flink != p_m_ListEntry )
  {
    if ( Flink->Blink != p_m_ListEntry || (Blink = p_m_ListEntry->Blink, Blink->Flink != p_m_ListEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_m_ListEntry->Blink = p_m_ListEntry;
    p_m_ListEntry->Flink = p_m_ListEntry;
    m_Parent = this->m_Parent;
    v11 = this->m_NumInstances - 1;
    this->m_NumInstances = v11;
    if ( m_Parent->m_RegisteredState == WmiRegistered )
    {
      if ( !v11 && (this->m_Flags & 2) == 0 )
        this->m_RemoveGuid = 1;
      updated = FxWmiIrpHandler::DeferUpdateLocked(m_Parent, irql);
    }
  }
  FxNonPagedObject::Unlock(this->m_Parent, irql, v6);
  if ( updated )
    FxWmiIrpHandler::UpdateGuids(this->m_Parent);
}
