/*
 * XREFs of ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C008EFAC
 * Callers:
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D760 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxEventQueue::SetDelayedDeletion(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // rdx
  KIRQL v6; // al

  m_PkgPnp = this->m_PkgPnp;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  m_Globals = m_PkgPnp->m_Globals;
  v5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_qq(
    m_Globals,
    4u,
    0xCu,
    0xBu,
    WPP_EventQueue_cpp_Traceguids,
    v5,
    m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags |= 4u;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v6);
}
