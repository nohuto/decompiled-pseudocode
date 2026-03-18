/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // dx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int64 v5; // rcx
  int v6; // eax
  signed int _a2; // eax
  FxDeviceBase *v9; // rdx
  unsigned __int16 v10; // cx
  const void *_a1; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0.m_Method;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    v6 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    v6 = 0;
  }
  if ( v6 < 0 )
    return 1335LL;
  if ( FxDevice::IsPdo(This->m_Device) )
  {
    _a2 = This->PowerEnableWakeAtBusOverload(This);
    if ( _a2 < 0 )
    {
      v9 = This->m_DeviceBase;
      v10 = v9->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10 )
        _a1 = 0LL;
      WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
      return 1335LL;
    }
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1467LL;
}
