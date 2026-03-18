/*
 * XREFs of ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C005D7CC
 * Callers:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008B80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C005D74C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005D878 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 */

char __fastcall FxObject::PerformEarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v3; // bl
  KIRQL v4; // si
  unsigned __int16 m_ObjectState; // ax

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  if ( m_ObjectState == 1 )
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v4, 0);
  if ( m_ObjectState >= 4u )
  {
    if ( m_ObjectState == 5 )
      return FxObject::PerformDisposingDisposeChildrenLocked(this, v4, 0);
    if ( m_ObjectState != 7 )
      goto LABEL_5;
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v4, 0);
  }
LABEL_5:
  FxObject::TraceDroppedEvent(this, 4u);
  KeReleaseSpinLock(p_m_Lock, v4);
  return v3;
}
