/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0087470
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00852E0 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgFdo::ReleaseReenumerationInterface(FxPkgFdo *this)
{
  void (__fastcall *InterfaceDereference)(void *); // rax

  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
  InterfaceDereference = this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceDereference;
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
}
