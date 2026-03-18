/*
 * XREFs of ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00155C4
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C001506C (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015480 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 */

char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  unsigned __int8 m_QueueFlags; // al
  char v4; // bl
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r10

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v4 = 0;
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_EventQueue_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 1;
      this->m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v4;
}
