/*
 * XREFs of ?PowerPolSystemWakeDeviceToD0@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0017BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0050608 (WPP_IFR_SF_dqqd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceToD0(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v3; // esi
  NTSTATUS globals; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 result; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a4; // rcx
  _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  Interval.QuadPart = -5000000LL;
  v3 = 0;
  m_Owner->m_RequestedPowerUpIrp = 1;
  while ( 1 )
  {
    globals = PoRequestPowerIrp(
                This->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                2u,
                (POWER_STATE)1,
                FxPkgPnp::_PowerPolDevicePowerUpComplete,
                This,
                0LL);
    if ( globals >= 0 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( (unsigned int)++v3 >= 0x64 )
    {
      This->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp = 0;
      m_DeviceBase = This->m_DeviceBase;
      _a4 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a4 = 0LL;
      WPP_IFR_SF_dqqd(
        This->m_Globals,
        (unsigned __int8)m_DeviceBase,
        0xCu,
        0x22u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        0,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a4,
        globals);
      break;
    }
  }
  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x23u, WPP_PowerPolicyStateMachine_cpp_Traceguids, 0, globals);
  result = 1433LL;
  if ( globals < 0 )
    return 1389LL;
  return result;
}
