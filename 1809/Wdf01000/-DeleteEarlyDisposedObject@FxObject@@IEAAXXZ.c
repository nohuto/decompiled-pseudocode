/*
 * XREFs of ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C005D4E0
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050B84 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C22C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D588 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v5; // si

  this->m_ObjectFlags |= 4u;
  if ( this->m_ParentObject )
  {
    p_m_Lock = &this->m_SpinLock.m_Lock;
    v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    m_ParentObject = this->m_ParentObject;
    v5 = v3;
    if ( m_ParentObject )
    {
      if ( (unsigned int)FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, 8u);
        KeReleaseSpinLock(p_m_Lock, v5);
        return;
      }
      this->m_ParentObject = 0LL;
    }
    KeReleaseSpinLock(p_m_Lock, v5);
  }
  FxObject::DeletedAndDisposedWorkerLocked(this, 0, 0);
}
