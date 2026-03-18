/*
 * XREFs of ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C005D600
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0050CF4 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00538FC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D020 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007D74C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C22C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005D878 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 */

unsigned __int8 __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  char v4; // di
  KIRQL v5; // bp
  FxObject *m_ParentObject; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v4 = 0;
  v5 = v3;
  if ( this->m_ObjectState == 1 )
  {
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( (unsigned int)FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, 7u);
        KeReleaseSpinLock(p_m_Lock, v5);
        return 0;
      }
      this->m_ParentObject = 0LL;
    }
    this->m_ObjectFlags |= 0x100u;
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v5, 1u);
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v3);
  }
  return v4;
}
