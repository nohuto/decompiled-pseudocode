/*
 * XREFs of ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00182F0 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z @ 0x1C007FB44 (-Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrivedNP(FxPkgPnp *This)
{
  unsigned int CurrentWakeReason; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v4; // r9
  __int64 m_ObjectSize; // r8
  WDFDEVICE__ *v6; // rdx
  signed int _a2; // eax
  FxDeviceBase *v8; // rdx
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // cx
  const void *_a1; // rdx

  CurrentWakeReason = FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  m_DeviceBase = This->m_DeviceBase;
  v4 = CurrentWakeReason >> 1;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_ObjectSize )
    v6 = 0LL;
  LOBYTE(m_ObjectSize) = CurrentWakeReason & 1;
  LOBYTE(v4) = (CurrentWakeReason & 2) != 0;
  _a2 = (unsigned int)FxPowerDeviceArmWakeFromSx::Invoke(
                        &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx,
                        v6,
                        m_ObjectSize,
                        v4);
  v8 = This->m_DeviceBase;
  if ( _a2 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (_a2 = This->PowerEnableWakeAtBusOverload(This), _a2 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1467LL;
    }
    v8 = This->m_DeviceBase;
    v9 = 27;
  }
  else
  {
    v9 = 26;
  }
  v10 = v8->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    _a1 = 0LL;
  WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, v9, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 34075LL;
}
