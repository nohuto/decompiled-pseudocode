/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001640 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0001CB0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002710 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00086A0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0014620 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001468C (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001472C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D7B8 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D87C (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005DA2C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005DAAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  unsigned __int16 m_ObjectFlags; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, NewState);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}
