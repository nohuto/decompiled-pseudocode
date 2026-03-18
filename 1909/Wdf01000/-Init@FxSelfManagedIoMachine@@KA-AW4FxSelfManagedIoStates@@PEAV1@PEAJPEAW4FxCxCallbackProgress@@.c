/*
 * XREFs of ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0018838 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Init(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoInit *p_m_DeviceSelfManagedIoInit; // rcx
  FxDeviceBase *m_DeviceBase; // r9
  unsigned __int64 v8; // r9
  FxCxCallbackProgress v9; // al
  FxCxCallbackProgress v11; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoInit = &This->m_DeviceSelfManagedIoInit;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v8 = 0LL;
  p_m_DeviceSelfManagedIoInit->m_Device = (WDFDEVICE__ *)v8;
  *Status = FxPrePostCallback::InvokeStateful(p_m_DeviceSelfManagedIoInit, &v11, FxCxCleanupAfterPreOrClientFailure);
  v9 = v11;
  if ( Progress )
    *Progress = v11;
  if ( *Status >= 0 )
    return 5LL;
  if ( v9 )
    return 4 - (unsigned int)((unsigned __int8)v9 < FxCxCallbackProgressClientSucceeded);
  return 1LL;
}
