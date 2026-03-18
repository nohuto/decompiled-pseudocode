/*
 * XREFs of ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00807F4
 * Callers:
 *     ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00814C0 (-PowerInitialConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081F70 (-PowerWakingConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081F90 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00188C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0081B08 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0084B84 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

void __fastcall FxPkgPnp::PowerConnectInterruptFailed(FxPkgPnp *this)
{
  signed int _a2; // eax
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // dx
  const void *_a1; // r8
  FxDeviceBase *v6; // rdx
  unsigned __int16 v7; // ax
  WDFDEVICE__ *v8; // rdx

  _a2 = FxPkgPnp::NotifyResourceObjectsDx(this, 4u);
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2);
  }
  v6 = this->m_DeviceBase;
  v7 = v6->m_ObjectSize;
  v8 = (WDFDEVICE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7 )
    v8 = 0LL;
  this->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  this->m_DeviceD0Exit.m_Device = v8;
  FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit);
  FxPkgPnp::PowerSetDevicePowerState(this, WdfPowerDeviceD3Final);
}
