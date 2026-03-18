/*
 * XREFs of ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00196F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0018854 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Suspending(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoSuspend *p_m_DeviceSelfManagedIoSuspend; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ecx

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoSuspend = &This->m_DeviceSelfManagedIoSuspend;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v7 = 0LL;
  p_m_DeviceSelfManagedIoSuspend->m_Device = (WDFDEVICE__ *)v7;
  v8 = FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoSuspend);
  *Status = v8;
  v9 = 10;
  if ( v8 >= 0 )
    return 7;
  return v9;
}
