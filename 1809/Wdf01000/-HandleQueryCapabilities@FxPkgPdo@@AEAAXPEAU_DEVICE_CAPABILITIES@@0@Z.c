/*
 * XREFs of ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C000D340
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000D200 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C007C3E0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgPdo::HandleQueryCapabilities(
        FxPkgPdo *this,
        _DEVICE_CAPABILITIES *ReportedCaps,
        _DEVICE_CAPABILITIES *ParentCaps)
{
  _DEVICE_POWER_STATE v4; // eax
  _DEVICE_POWER_STATE v7; // eax
  _DEVICE_POWER_STATE v8; // eax
  _DEVICE_POWER_STATE v9; // eax
  _DEVICE_POWER_STATE v10; // eax
  _DEVICE_POWER_STATE v11; // eax
  unsigned __int64 *p_m_Lock; // rbp
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  FxPnpStateAndCaps v15; // esi
  int v16; // eax
  int v17; // esi
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax
  unsigned __int8 SystemWake; // al
  _SYSTEM_POWER_STATE v25; // ecx
  unsigned __int8 DeviceWake; // al
  _DEVICE_POWER_STATE v27; // ecx
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax
  wchar_t *m_ContainerID; // rcx
  wchar_t *v32; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v4 = (this->m_PowerCaps.States >> 4) & 0xF;
  if ( v4 == PowerDeviceMaximum )
    v4 = ParentCaps->DeviceState[1];
  ReportedCaps->DeviceState[1] = v4;
  v7 = (this->m_PowerCaps.States >> 8) & 0xF;
  if ( v7 == PowerDeviceMaximum )
    v7 = ParentCaps->DeviceState[2];
  ReportedCaps->DeviceState[2] = v7;
  v8 = (unsigned __int8)HIBYTE(LOWORD(this->m_PowerCaps.States)) >> 4;
  if ( v8 == PowerDeviceMaximum )
    v8 = ParentCaps->DeviceState[3];
  ReportedCaps->DeviceState[3] = v8;
  v9 = HIWORD(this->m_PowerCaps.States) & 0xF;
  if ( v9 == PowerDeviceMaximum )
    v9 = ParentCaps->DeviceState[4];
  ReportedCaps->DeviceState[4] = v9;
  v10 = (this->m_PowerCaps.States >> 20) & 0xF;
  if ( v10 == PowerDeviceMaximum )
    v10 = ParentCaps->DeviceState[5];
  ReportedCaps->DeviceState[5] = v10;
  v11 = HIBYTE(this->m_PowerCaps.States) & 0xF;
  if ( v11 == PowerDeviceMaximum )
    v11 = ParentCaps->DeviceState[6];
  ReportedCaps->DeviceState[6] = v11;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_ContainerID = this[-1].m_ContainerID) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_ContainerID, &PreviousIrql, (unsigned __int8)ParentCaps);
    v13 = PreviousIrql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v15.ByEnum = (FxPnpStateAndCaps::<unnamed_type_ByEnum>)this->m_PnpStateAndCaps;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v32 = this[-1].m_ContainerID) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v32, v13, v14);
  else
    KeReleaseSpinLock(p_m_Lock, v13);
  if ( (*(_WORD *)&v15.ByEnum & 0x3000) != 0 )
  {
    if ( (*(_WORD *)&v15.ByEnum & 0x3000) == 0x1000 )
      *((_DWORD *)ReportedCaps + 1) |= 4u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~4u;
  }
  if ( (*(_WORD *)&v15.ByEnum & 0xC000) != 0 )
  {
    if ( (*(_WORD *)&v15.ByEnum & 0xC000) == 0x4000 )
      *((_DWORD *)ReportedCaps + 1) |= 8u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~8u;
  }
  if ( (v15.Value & 0x30000) != 0 )
  {
    if ( (v15.Value & 0x30000) == 0x10000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x10u;
  }
  if ( (v15.Value & 0xC0000) != 0 )
  {
    if ( (v15.Value & 0xC0000) == 0x40000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20u;
  }
  if ( (v15.Value & 0x300000) != 0 )
  {
    if ( (v15.Value & 0x300000) == 0x100000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x40u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x40u;
  }
  v16 = v15.Value & 0xC00000;
  if ( (v15.Value & 0xC00000) == 0x800000 )
  {
    if ( !this->m_RawOK )
      goto LABEL_34;
LABEL_90:
    *((_DWORD *)ReportedCaps + 1) |= 0x80u;
    goto LABEL_34;
  }
  if ( !v16 )
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x80u;
    goto LABEL_34;
  }
  if ( v16 == 0x400000 )
    goto LABEL_90;
LABEL_34:
  if ( (v15.Value & 0x3000000) != 0 )
  {
    if ( (v15.Value & 0x3000000) == 0x1000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x200u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x200u;
  }
  if ( (v15.Value & 0xC000000) != 0 )
  {
    if ( (v15.Value & 0xC000000) == 0x4000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x4000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x4000u;
  }
  v17 = v15.Value & 0x30000000;
  if ( v17 )
  {
    if ( v17 == 0x10000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20000u;
  }
  v18 = this->m_PowerCaps.Caps & 0x30;
  if ( v18 )
  {
    if ( v18 == 16 )
      *((_DWORD *)ReportedCaps + 1) |= 0x400u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x400u;
  }
  v19 = this->m_PowerCaps.Caps & 0xC0;
  if ( v19 )
  {
    if ( v19 == 64 )
      *((_DWORD *)ReportedCaps + 1) |= 0x800u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x800u;
  }
  v20 = this->m_PowerCaps.Caps & 0x300;
  if ( v20 )
  {
    if ( v20 == 256 )
      *((_DWORD *)ReportedCaps + 1) |= 0x1000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x1000u;
  }
  v21 = this->m_PowerCaps.Caps & 0xC00;
  if ( v21 )
  {
    if ( v21 == 1024 )
      *((_DWORD *)ReportedCaps + 1) |= 0x2000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x2000u;
  }
  v22 = this->m_PowerCaps.Caps & 3;
  if ( v22 )
  {
    if ( v22 == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 1u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~1u;
  }
  v23 = this->m_PowerCaps.Caps & 0xC;
  if ( v23 )
  {
    if ( v23 == 4 )
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
    v25 = ParentCaps->SystemWake;
  else
    v25 = SystemWake;
  ReportedCaps->SystemWake = v25;
  DeviceWake = this->m_PowerCaps.DeviceWake;
  if ( DeviceWake == 5 )
    v27 = ParentCaps->DeviceWake;
  else
    v27 = DeviceWake;
  ReportedCaps->DeviceWake = v27;
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
