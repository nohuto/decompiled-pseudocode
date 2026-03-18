/*
 * XREFs of ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0085980
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C007C5F4 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0082188 (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C00865BC (WPP_IFR_SF_dddDqqd.c)
 */

__int64 __fastcall FxPkgPnp::SetUsageNotificationFlags(FxPkgPnp *this, __int32 Type, unsigned __int8 InPath)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _DEVICE_OBJECT *level; // r11
  unsigned int globals; // edi
  unsigned __int16 m_ObjectSize; // ax
  int id; // r9d
  const void *flags; // r10
  FxPkgPnp *v13; // rcx
  FxDeviceBase *v14; // rdx
  __int64 v15; // rdx
  const _GUID *v17; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  level = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  globals = level->Flags;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    id = BYTE2(m_DeviceBase[1].m_Globals);
    flags = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      flags = 0LL;
    WPP_IFR_SF_dddDqqd(
      m_Globals,
      Type,
      InPath,
      id,
      v17,
      Type,
      InPath,
      this->m_SpecialFileCount[Type - 1],
      globals,
      level,
      flags,
      id);
  }
  FxPkgPnp::AdjustUsageCount(this, (_DEVICE_USAGE_NOTIFICATION_TYPE)Type, InPath);
  if ( Type != 4 )
  {
    v14 = this->m_DeviceBase;
    if ( BYTE1(v14[1].m_Globals) )
    {
      v14->m_DeviceObject.m_DeviceObject->Flags = globals ^ ((unsigned __int16)globals ^ (unsigned __int16)v14->m_AttachedDevice.m_DeviceObject->Flags) & 0x6000;
    }
    else if ( InPath )
    {
      v14->m_DeviceObject.m_DeviceObject->Flags &= ~0x2000u;
    }
    else if ( BYTE2(v14[1].m_Globals) && !FxPkgPnp::IsInSpecialUse(v13) )
    {
      *(_DWORD *)(*(_QWORD *)(v15 + 144) + 48LL) |= 0x2000u;
    }
  }
  return globals;
}
