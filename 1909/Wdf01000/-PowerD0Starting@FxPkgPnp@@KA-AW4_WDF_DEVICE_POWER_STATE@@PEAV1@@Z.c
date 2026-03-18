/*
 * XREFs of ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080990
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0018838 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x1C00822D8 (-SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0Starting(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _WDF_POWER_DEVICE_STATE m_DevicePowerState; // r8d
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v6; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  m_DevicePowerState = This->m_DevicePowerState;
  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0Entry->m_PreviousState = m_DevicePowerState;
  if ( !m_ObjectSize )
    v6 = 0LL;
  p_m_DeviceD0Entry->m_Device = (WDFDEVICE__ *)v6;
  if ( (int)FxPrePostCallback::InvokeStateful(p_m_DeviceD0Entry, &progress, FxCxCleanupAfterPreOrClientFailure) < 0 )
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 836 : 861;
  if ( This->m_SleepStudyTrackReferences == 1 )
    FxPkgPnp::SleepStudyResetBlockersForD0(This);
  return 784LL;
}
