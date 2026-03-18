/*
 * XREFs of ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C005D8F4
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D87C (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

void __fastcall FxObject::ParentDeleteEvent(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  int m_ObjectState; // r8d
  KIRQL v5; // bl
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v5 = v3;
  this->m_ParentObject = 0LL;
  v6 = m_ObjectState - 2;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
LABEL_6:
      KeReleaseSpinLock(p_m_Lock, v5);
      return;
    }
    v8 = v7 - 4;
    if ( v8 )
    {
      if ( v8 == 1 )
        FxObject::TraceDroppedEvent(this, 6u);
      goto LABEL_6;
    }
  }
  FxObject::DeletedAndDisposedWorkerLocked(this, v3, 1u);
}
