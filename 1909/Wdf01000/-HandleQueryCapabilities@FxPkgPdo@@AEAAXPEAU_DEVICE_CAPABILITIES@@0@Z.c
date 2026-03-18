/*
 * XREFs of ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C000E320
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000E1E0 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C007CDC0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::HandleQueryCapabilities(
        FxPkgPdo *this,
        _DEVICE_CAPABILITIES *ReportedCaps,
        _DEVICE_CAPABILITIES *ParentCaps)
{
  _DEVICE_POWER_STATE v4; // eax
  _DEVICE_POWER_STATE v5; // eax
  _DEVICE_POWER_STATE v6; // eax
  _DEVICE_POWER_STATE v7; // eax
  _DEVICE_POWER_STATE v8; // eax
  _DEVICE_POWER_STATE v9; // eax
  FxPnpCaps v10; // eax
  int v11; // eax
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  unsigned __int8 SystemWake; // al
  _SYSTEM_POWER_STATE v19; // r8d
  unsigned __int8 DeviceWake; // al
  _DEVICE_POWER_STATE v21; // r8d
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax

  v4 = (this->m_PowerCaps.States >> 4) & 0xF;
  if ( v4 == PowerDeviceMaximum )
    v4 = ParentCaps->DeviceState[1];
  ReportedCaps->DeviceState[1] = v4;
  v5 = (this->m_PowerCaps.States >> 8) & 0xF;
  if ( v5 == PowerDeviceMaximum )
    v5 = ParentCaps->DeviceState[2];
  ReportedCaps->DeviceState[2] = v5;
  v6 = (unsigned __int8)HIBYTE(LOWORD(this->m_PowerCaps.States)) >> 4;
  if ( v6 == PowerDeviceMaximum )
    v6 = ParentCaps->DeviceState[3];
  ReportedCaps->DeviceState[3] = v6;
  v7 = HIWORD(this->m_PowerCaps.States) & 0xF;
  if ( v7 == PowerDeviceMaximum )
    v7 = ParentCaps->DeviceState[4];
  ReportedCaps->DeviceState[4] = v7;
  v8 = (this->m_PowerCaps.States >> 20) & 0xF;
  if ( v8 == PowerDeviceMaximum )
    v8 = ParentCaps->DeviceState[5];
  ReportedCaps->DeviceState[5] = v8;
  v9 = HIBYTE(this->m_PowerCaps.States) & 0xF;
  if ( v9 == PowerDeviceMaximum )
    v9 = ParentCaps->DeviceState[6];
  ReportedCaps->DeviceState[6] = v9;
  v10.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)this->m_PnpCaps;
  if ( (*(_BYTE *)&v10.ByEnum & 3) != 0 )
  {
    if ( (this->m_PnpCaps.Value & 3) == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 4u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~4u;
  }
  if ( (*(_BYTE *)&v10.ByEnum & 0xC) != 0 )
  {
    if ( (*(_BYTE *)&v10.ByEnum & 0xC) == 4 )
      *((_DWORD *)ReportedCaps + 1) |= 8u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~8u;
  }
  if ( (*(_BYTE *)&v10.ByEnum & 0x30) != 0 )
  {
    if ( (*(_BYTE *)&v10.ByEnum & 0x30) == 0x10 )
      *((_DWORD *)ReportedCaps + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x10u;
  }
  if ( (*(_BYTE *)&v10.ByEnum & 0xC0) != 0 )
  {
    if ( (*(_BYTE *)&v10.ByEnum & 0xC0) == 0x40 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20u;
  }
  if ( (*(_WORD *)&v10.ByEnum & 0x300) != 0 )
  {
    if ( (*(_WORD *)&v10.ByEnum & 0x300) == 0x100 )
      *((_DWORD *)ReportedCaps + 1) |= 0x40u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x40u;
  }
  switch ( *(_WORD *)&v10.ByEnum & 0xC00 )
  {
    case 2048:
      if ( !this->m_RawOK )
        break;
LABEL_78:
      *((_DWORD *)ReportedCaps + 1) |= 0x80u;
      break;
    case 0:
      *((_DWORD *)ReportedCaps + 1) &= ~0x80u;
      break;
    case 1024:
      goto LABEL_78;
  }
  if ( (*(_WORD *)&v10.ByEnum & 0x3000) != 0 )
  {
    if ( (*(_WORD *)&v10.ByEnum & 0x3000) == 0x1000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x200u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x200u;
  }
  if ( (*(_WORD *)&v10.ByEnum & 0xC000) != 0 )
  {
    if ( (*(_WORD *)&v10.ByEnum & 0xC000) == 0x4000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x4000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x4000u;
  }
  v11 = v10.Value & 0x30000;
  if ( v11 )
  {
    if ( v11 == 0x10000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20000u;
  }
  v12 = this->m_PowerCaps.Caps & 0x30;
  if ( v12 )
  {
    if ( v12 == 16 )
      *((_DWORD *)ReportedCaps + 1) |= 0x400u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x400u;
  }
  v13 = this->m_PowerCaps.Caps & 0xC0;
  if ( v13 )
  {
    if ( v13 == 64 )
      *((_DWORD *)ReportedCaps + 1) |= 0x800u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x800u;
  }
  v14 = this->m_PowerCaps.Caps & 0x300;
  if ( v14 )
  {
    if ( v14 == 256 )
      *((_DWORD *)ReportedCaps + 1) |= 0x1000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x1000u;
  }
  v15 = this->m_PowerCaps.Caps & 0xC00;
  if ( v15 )
  {
    if ( v15 == 1024 )
      *((_DWORD *)ReportedCaps + 1) |= 0x2000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x2000u;
  }
  v16 = this->m_PowerCaps.Caps & 3;
  if ( v16 )
  {
    if ( v16 == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 1u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~1u;
  }
  v17 = this->m_PowerCaps.Caps & 0xC;
  if ( v17 )
  {
    if ( v17 == 4 )
      *((_DWORD *)ReportedCaps + 1) |= 2u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~2u;
  }
  if ( this->m_RawOK )
    *((_DWORD *)ReportedCaps + 1) |= 0x100u;
  ReportedCaps->UINumber = this->m_PnpCapsUINumber;
  ReportedCaps->Address = this->m_PnpCapsAddress;
  SystemWake = this->m_PowerCaps.SystemWake;
  if ( SystemWake == 7 )
    v19 = ParentCaps->SystemWake;
  else
    v19 = SystemWake;
  ReportedCaps->SystemWake = v19;
  DeviceWake = this->m_PowerCaps.DeviceWake;
  if ( DeviceWake == 5 )
    v21 = ParentCaps->DeviceWake;
  else
    v21 = DeviceWake;
  ReportedCaps->DeviceWake = v21;
  D1Latency = this->m_PowerCaps.D1Latency;
  if ( D1Latency == -1 )
    D1Latency = 0;
  ReportedCaps->D1Latency = D1Latency;
  D2Latency = this->m_PowerCaps.D2Latency;
  if ( D2Latency == -1 )
    D2Latency = 0;
  ReportedCaps->D2Latency = D2Latency;
  D3Latency = this->m_PowerCaps.D3Latency;
  if ( D3Latency != -1 )
    ReportedCaps->D3Latency = D3Latency;
}
