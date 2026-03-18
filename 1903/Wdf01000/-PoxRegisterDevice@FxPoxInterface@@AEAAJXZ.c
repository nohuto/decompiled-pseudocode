/*
 * XREFs of ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C0091638
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0090DA0 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0090D68 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPoxInterface::PoxRegisterDevice(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  __int64 v4; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  int v6; // r10d
  _POX_SETTINGS *v7; // r9
  _PO_FX_COMPONENT_V1 *Component; // rax
  int v9; // ebx
  FxPkgPnp *v10; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  _BYTE poxDevice_8[176]; // [rsp+48h] [rbp-69h] OVERLAPPED BYREF
  __int64 v16; // [rsp+F8h] [rbp+47h]

  memset(poxDevice_8, 0, sizeof(poxDevice_8));
  m_PkgPnp = this->m_PkgPnp;
  v16 = 0LL;
  *(_QWORD *)&poxDevice_8[32] = FxPoxInterface::StateCallback;
  *(_QWORD *)&poxDevice_8[16] = FxPoxInterface::ComponentActiveCallback;
  *(_QWORD *)&poxDevice_8[24] = FxPoxInterface::ComponentIdleCallback;
  *(_QWORD *)&poxDevice_8[40] = FxPoxInterface::PowerRequiredCallback;
  *(_QWORD *)&poxDevice_8[48] = FxPoxInterface::PowerNotRequiredCallback;
  *(_DWORD *)poxDevice_8 = 3;
  *(_QWORD *)&poxDevice_8[88] = this;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported )
  {
    *(_QWORD *)&poxDevice_8[64] = FxPoxInterface::DirectedPowerUpCallback;
    *(_QWORD *)&poxDevice_8[72] = FxPoxInterface::DirectedPowerDownCallback;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v4 = *(_QWORD *)&poxDevice_8[8];
    if ( m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsChildrenOptional )
      v4 = 6LL;
    *(_QWORD *)&poxDevice_8[8] = v4;
  }
  *(_DWORD *)&poxDevice_8[96] = 1;
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
  v7 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->PowerControlCallback )
    *(_QWORD *)&poxDevice_8[56] = FxPoxInterface::PowerControlCallback;
  else
    *(_QWORD *)&poxDevice_8[56] = 0LL;
  if ( PowerFrameworkSettings && (Component = PowerFrameworkSettings->Component) != 0LL )
  {
    *(_GUID *)&poxDevice_8[104] = Component->Id;
    *(_DWORD *)&poxDevice_8[132] = v7->Component->IdleStateCount;
    *(_DWORD *)&poxDevice_8[128] = v7->Component->DeepestWakeableIdleState;
    *(_QWORD *)&poxDevice_8[136] = v7->Component->IdleStates;
  }
  else
  {
    LODWORD(v16) = -1;
    *(_QWORD *)&poxDevice_8[136] = &poxDevice_8[160];
    *(_DWORD *)&poxDevice_8[132] = v6;
  }
  v9 = PoFxRegisterDevice(this->m_PkgPnp->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, poxDevice_8, &this->m_PoHandle);
  if ( v9 >= 0 )
  {
    return 0;
  }
  else
  {
    v10 = this->m_PkgPnp;
    m_DeviceBase = v10->m_DeviceBase;
    m_Globals = v10->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject,
      v9);
  }
  return (unsigned int)v9;
}
