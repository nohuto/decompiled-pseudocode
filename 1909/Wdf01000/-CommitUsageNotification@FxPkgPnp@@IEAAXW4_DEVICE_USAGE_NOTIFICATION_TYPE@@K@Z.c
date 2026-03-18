/*
 * XREFs of ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C00837C0
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0084CF4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_dDqq @ 0x1C00875BC (WPP_IFR_SF_dDqq.c)
 */

void __fastcall FxPkgPnp::CommitUsageNotification(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        __int16 OldFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int level; // edi
  FxDeviceBase *m_DeviceBase; // r9
  const void *id; // r8
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  if ( (level & 0x2000) == 0 && (OldFlags & 0x2000) != 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x400u, 0);
  if ( (level & 0x2000) != 0 && (OldFlags & 0x2000) == 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x200u, 0);
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_dDqq(
      m_Globals,
      Type - 1,
      (unsigned int)id,
      (unsigned __int16)m_DeviceBase,
      v10,
      this->m_SpecialFileCount[Type - 1],
      level,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      id);
  }
}
