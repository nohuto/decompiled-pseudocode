/*
 * XREFs of ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001468C
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00145C8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C005334C (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DA10 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007E0FC (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001472C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C668 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005DAAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v3; // di
  KIRQL v4; // si
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
    goto LABEL_12;
  m_ParentObject = this->m_ParentObject;
  if ( !m_ParentObject )
  {
LABEL_3:
    this->m_ObjectFlags |= 0x100u;
    FxObject::SetObjectStateLocked(this, FxObjectStateDisposingEarly);
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v4) )
      return FxObject::PerformDisposingDisposeChildrenLocked(this, v4, 1u);
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
LABEL_12:
    KeReleaseSpinLock(p_m_Lock, v4);
    return v3;
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_3;
  }
  FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
  KeReleaseSpinLock(p_m_Lock, v4);
  return 0;
}
