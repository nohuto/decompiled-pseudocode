/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002390 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0003880 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008490 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008B80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D41C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C005D4E0 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D588 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C005D600 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C005D74C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005D878 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005D8F8 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  unsigned __int16 m_ObjectFlags; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v6; // rdx

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v6 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v6, this->m_ObjectState, NewState);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}
