/*
 * XREFs of ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C008571C
 * Callers:
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DB40 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedSurpriseRemove@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DB70 (-PnpEventQueriedSurpriseRemove@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DB90 (-PnpEventQueryCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012C80 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 */

void __fastcall FxPkgPnp::PnpPowerDereferenceSelf(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::IoDecrement(&m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
}
