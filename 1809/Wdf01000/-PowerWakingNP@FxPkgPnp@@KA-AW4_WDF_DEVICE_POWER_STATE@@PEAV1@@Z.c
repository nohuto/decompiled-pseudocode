/*
 * XREFs of ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081550
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C00187C4 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _WDF_POWER_DEVICE_STATE m_DevicePowerState; // r8d
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  m_DevicePowerState = This->m_DevicePowerState;
  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0Entry->m_PreviousState = m_DevicePowerState;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceD0Entry->m_Device = (WDFDEVICE__ *)v5;
  if ( (int)FxPrePostCallback::InvokeStateful(p_m_DeviceD0Entry, &progress, FxCxCleanupAfterPreOrClientFailure) >= 0 )
    return 33628LL;
  else
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33624 : 33631;
}
