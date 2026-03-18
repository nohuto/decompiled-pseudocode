/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C007BF20
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00852E0 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPdo::ReleaseReenumerationInterface(FxPkgPdo *this)
{
  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
}
