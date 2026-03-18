/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00852E0
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C007BF20 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0087470 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::RemoveWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx

  m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
  if ( m_SetDeviceFailedAttemptRestartWorkItem )
  {
    m_SetDeviceFailedAttemptRestartWorkItem->DeleteObject(m_SetDeviceFailedAttemptRestartWorkItem);
    this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  }
}
