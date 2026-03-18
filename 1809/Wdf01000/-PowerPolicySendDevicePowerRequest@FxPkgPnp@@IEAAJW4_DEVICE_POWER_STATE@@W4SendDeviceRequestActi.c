/*
 * XREFs of ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0016E74
 * Callers:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0016C84 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0016D40 (-PowerPolS0NoWakePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0016D90 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00894D0 (-PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A040 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A2C0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A450 (-PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C008B1E4 (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0050608 (WPP_IFR_SF_dqqd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action)
{
  void (__fastcall *v3)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, FxPkgPnp *); // r14
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v8; // ebp
  NTSTATUS globals; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v12; // rax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a4; // rdx
  _LARGE_INTEGER interval; // [rsp+80h] [rbp+8h] BYREF

  interval.QuadPart = -5000000LL;
  v3 = (void (__fastcall *)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, FxPkgPnp *))FxPkgPnp::_PowerPolDevicePowerUpComplete;
  if ( DeviceState.SystemState != PowerSystemWorking )
    v3 = FxPkgPnp::_PowerPolDevicePowerDownComplete;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
    m_Owner->m_RequestedPowerUpIrp = 1;
  else
    m_Owner->m_RequestedPowerDownIrp = 1;
  v8 = 0;
  while ( 1 )
  {
    globals = PoRequestPowerIrp(
                this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                2u,
                DeviceState,
                (PREQUEST_POWER_COMPLETE)v3,
                this,
                0LL);
    if ( globals >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v8 < 0x64 )
        continue;
    }
    v12 = this->m_PowerPolicyMachine.m_Owner;
    if ( DeviceState.SystemState == PowerSystemWorking )
      v12->m_RequestedPowerUpIrp = 0;
    else
      v12->m_RequestedPowerDownIrp = 0;
    if ( Action == Retry )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a4 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a4 = 0LL;
      WPP_IFR_SF_dqqd(
        this->m_Globals,
        (unsigned __int8)_a4,
        0xCu,
        0x22u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        DeviceState.SystemState - 1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a4,
        globals);
    }
    break;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(
      m_Globals,
      5u,
      0xCu,
      0x23u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      DeviceState.SystemState - 1,
      globals);
  return (unsigned int)globals;
}
