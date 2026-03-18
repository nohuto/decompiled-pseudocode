/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005DA6C
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002390 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00038F0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C005D93C (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C005DE84 (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int16 v3; // dx
  bool v4; // r15
  KIRQL v5; // al
  FxTagTrackingBlock *m_Next; // rdi
  KIRQL v7; // r14
  FxTagTrackingBlock *v8; // rcx
  int level; // eax
  const char *globals; // rdx
  void *_a4; // r8
  FxObject *m_OwningObject; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  v3 = this->m_OwningObject->m_ObjectFlags & 8;
  v4 = v3 != 0;
  if ( v3 && (this->m_Next || this->m_FailedCount) )
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v7 = v5;
  while ( m_Next )
  {
    v8 = m_Next;
    m_Next = m_Next->Next;
    level = v8->Line;
    globals = v8->File;
    _a4 = v8->Tag;
    m_OwningObject = this->m_OwningObject;
    if ( v4 )
    {
      WPP_IFR_SF_qqsd(m_Globals, 2u, (unsigned int)_a4, 0xCu, traceGuid, m_OwningObject, _a4, globals, level);
    }
    else
    {
      v4 = 1;
      WPP_IFR_SF_qqsd(m_Globals, 3u, (unsigned int)_a4, 0xDu, traceGuid, m_OwningObject, _a4, globals, level);
    }
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v7);
}
