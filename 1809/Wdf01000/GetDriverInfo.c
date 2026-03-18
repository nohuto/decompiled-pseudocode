/*
 * XREFs of GetDriverInfo @ 0x1C0061FB4
 * Callers:
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned int v4; // r11d
  unsigned __int8 v5; // r8
  unsigned int v6; // ecx
  FxPkgPnp *m_PkgPnp; // rdi
  unsigned __int16 m_DeviceTelemetryInfoFlags; // si
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned int v10; // edx
  int v11; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r10
  unsigned int v13; // edx
  unsigned __int8 Enabled; // al
  unsigned int v15; // eax
  unsigned __int8 WakeFromS0Capable; // cl
  unsigned int v17; // r9d
  int v18; // eax
  unsigned int v19; // r9d
  FxPowerPolicyOwnerSettings *v20; // rcx
  int v21; // eax
  unsigned int v22; // r9d

  v4 = DriverInfo->Dword & 0xFFFFFFF3 | (4 * (Globals->FxVerifierOn & 1)) | ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0
                                                                           ? 8
                                                                           : 0);
  DriverInfo->Dword = v4;
  v5 = 0;
  if ( Fdo )
  {
    m_PkgPnp = Fdo->m_PkgPnp;
    m_DeviceTelemetryInfoFlags = Fdo->m_DeviceTelemetryInfoFlags;
    m_DeviceObject = Fdo->m_DeviceObject.m_DeviceObject;
    v10 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(16 * LOBYTE(m_PkgPnp[1].m_DeviceBase))) & 0x10;
    DriverInfo->Dword = v10;
    if ( m_DeviceObject )
      v11 = (__int64)m_DeviceObject[1].CurrentIrp & 1;
    else
      v11 = 0;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v13 = (m_Owner != 0LL ? 0x80 : 0) | (32 * v11) & 0xFFFFFF3F | v10 & 0xFFFFFF1F;
    DriverInfo->Dword = v13;
    if ( m_Owner )
      Enabled = m_Owner->m_IdleSettings.Enabled;
    else
      Enabled = 0;
    v15 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(Enabled << 8)) & 0x100;
    DriverInfo->Dword = v15;
    if ( m_Owner )
      WakeFromS0Capable = m_Owner->m_IdleSettings.WakeFromS0Capable;
    else
      WakeFromS0Capable = 0;
    v17 = v15 ^ (v15 ^ (WakeFromS0Capable << 9)) & 0x200;
    DriverInfo->Dword = v17;
    if ( !m_Owner || !m_Owner->m_IdleSettings.WakeFromS0Capable || (v18 = 1, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v18 = 0;
    v19 = (v18 << 10) | v17 & 0xFFFFFBFF;
    DriverInfo->Dword = v19;
    if ( m_Owner )
    {
      v20 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
      v21 = (m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0;
    }
    else
    {
      v20 = 0LL;
      v21 = 0;
    }
    v22 = (v21 << 11) | v19 & 0xFFFFF7FF;
    DriverInfo->Dword = v22;
    if ( v20 )
      v5 = v20->m_WakeSettings.Enabled;
    v6 = ((v5 & 1 | (2
                   * ((2 * (m_DeviceTelemetryInfoFlags & 0x100 | m_DeviceTelemetryInfoFlags & 0x30)) | m_DeviceTelemetryInfoFlags & 0xF))) << 12) & 0xFF7FFFFF | v22 & 0xFF000FFF | (m_PkgPnp->m_InterruptObjectCount > 1 ? 0x20000 : 0) | ((m_DeviceTelemetryInfoFlags & 0x80 | m_DeviceTelemetryInfoFlags & 0x40) << 14) & 0xFF3FFFFF | ((m_DeviceTelemetryInfoFlags & 0x200) << 14);
  }
  else
  {
    v6 = v4 ^ (Globals->Public.DriverFlags ^ v4) & 1 ^ ((unsigned __int8)Globals->Public.DriverFlags ^ (unsigned __int8)(v4 ^ (Globals->Public.DriverFlags ^ v4) & 1)) & 2;
  }
  DriverInfo->Dword = v6;
}
