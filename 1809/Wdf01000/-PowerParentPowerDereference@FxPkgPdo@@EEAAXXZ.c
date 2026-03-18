/*
 * XREFs of ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C00182B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C00182D8 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PowerParentPowerDereference(FxPkgPdo *this)
{
  FxPkgPnp::PowerPolicyChildPoweredDown(*(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL));
}
