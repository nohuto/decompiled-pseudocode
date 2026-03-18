/*
 * XREFs of ?RestartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008F630
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00188C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::RestartedFailedPost(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoSuspend *p_m_DeviceSelfManagedIoSuspend; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v6; // rdx

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoSuspend = &This->m_DeviceSelfManagedIoSuspend;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v6 = 0LL;
  p_m_DeviceSelfManagedIoSuspend->m_Device = (WDFDEVICE__ *)v6;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoSuspend);
  return 10LL;
}
