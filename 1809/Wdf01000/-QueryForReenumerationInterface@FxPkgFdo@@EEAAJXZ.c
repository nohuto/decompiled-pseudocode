/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C00873C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0051868 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C008231C (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgFdo::QueryForReenumerationInterface(FxPkgFdo *this)
{
  _REENUMERATE_SELF_INTERFACE_STANDARD *p_m_SurpriseRemoveAndReenumerateSelfInterface; // rsi
  int WorkItemForSetDeviceFailed; // edi

  p_m_SurpriseRemoveAndReenumerateSelfInterface = &this->m_SurpriseRemoveAndReenumerateSelfInterface;
  if ( this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf )
    return 0LL;
  memset(
    &this->m_SurpriseRemoveAndReenumerateSelfInterface,
    0,
    sizeof(this->m_SurpriseRemoveAndReenumerateSelfInterface));
  *(_DWORD *)&p_m_SurpriseRemoveAndReenumerateSelfInterface->Size = 65576;
  FxDeviceBase::QueryForInterface(
    this->m_DeviceBase,
    &GUID_REENUMERATE_SELF_INTERFACE_STANDARD,
    (_INTERFACE *)p_m_SurpriseRemoveAndReenumerateSelfInterface,
    0x28u,
    1u,
    0LL,
    this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  WorkItemForSetDeviceFailed = 0;
  if ( p_m_SurpriseRemoveAndReenumerateSelfInterface->SurpriseRemoveAndReenumerateSelf )
  {
    WorkItemForSetDeviceFailed = FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
    if ( WorkItemForSetDeviceFailed < 0 )
      this->ReleaseReenumerationInterface(this);
  }
  return (unsigned int)WorkItemForSetDeviceFailed;
}
