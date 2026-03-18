/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000A620 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0053490 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C00555D0 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008D310 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C009202C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00086A0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008750 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001472C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C005C408 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005C668 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D87C (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005DA2C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005DAAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // r15
  unsigned __int16 m_ObjectState; // dx
  unsigned __int16 m_ObjectFlags; // cx
  FxObject *v5; // rdi
  KIRQL v6; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rdx
  FxObject *v10; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v12; // rsi
  unsigned __int16 v13; // ax
  _LIST_ENTRY **p_Blink; // r15
  KIRQL v15; // r13
  __int16 v16; // ax
  __int16 v17; // cx
  unsigned __int8 v18; // al
  FxObject *m_ParentObject; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rdx
  KIRQL v22; // dl
  _FX_DRIVER_GLOBALS *v23; // r10
  char v24; // cl
  const void *v25; // rdx
  _FX_DRIVER_GLOBALS *v26; // rcx
  const void *v27; // rdx
  _FX_DRIVER_GLOBALS *v28; // r10
  const void *v29; // rdx
  KIRQL v30; // di
  _FX_DRIVER_GLOBALS *v31; // rcx
  const void *v32; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  m_ObjectFlags = this->m_ObjectFlags | 4;
  this->m_ObjectFlags = m_ObjectFlags;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
LABEL_42:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
      return;
    }
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
        goto LABEL_42;
      }
      this->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(this, v2, 1u);
    return;
  }
  v5 = this->m_ParentObject;
  if ( v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    if ( v5->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v5, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
      FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
      return;
    }
    Flink = this->m_ChildEntry.Flink;
    p_m_ChildEntry = &this->m_ChildEntry;
    if ( Flink->Blink != &this->m_ChildEntry || (Blink = this->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_ChildEntry.Blink = &this->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
    m_ObjectFlags = this->m_ObjectFlags;
    this->m_ParentObject = 0LL;
  }
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v2 )
    goto LABEL_54;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 9u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 9;
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  this->m_ObjectState = 9;
  if ( (m_ObjectFlags & 0x20) != 0 )
  {
    if ( v2 )
      goto LABEL_54;
  }
  v10 = (FxObject *)this->m_ChildListHead.Flink;
  p_m_ChildListHead = &this->m_ChildListHead;
  if ( v10 != (FxObject *)&this->m_ChildListHead )
  {
    while ( !v2 || (v10[-1].m_SpinLock.m_Lock & 0x10) == 0 )
    {
      v10 = (FxObject *)v10->__vftable;
      if ( v10 == (FxObject *)p_m_ChildListHead )
        goto LABEL_13;
    }
LABEL_54:
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    v22 = v2;
LABEL_55:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v22);
    return;
  }
LABEL_13:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
  v12 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    while ( 1 )
    {
      p_Blink = &v12[-5].Blink;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v12[-1]);
      if ( WORD1(v12[-3].Flink) != 1 )
      {
        switch ( WORD1(v12[-3].Flink) )
        {
          case 5:
            v18 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v12[-5].Blink, v15, 0);
            goto LABEL_33;
          case 7:
            v18 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v12[-5].Blink, v15, 0);
            goto LABEL_33;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v12[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)p_Blink + 7, v15);
            goto LABEL_34;
        }
      }
      v16 = *((_WORD *)p_Blink + 12);
      if ( (v16 & 0x200) != 0 )
      {
        v23 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
        v24 = *((_WORD *)p_Blink + 12);
        if ( v23->FxVerboseOn )
        {
          v25 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*((_WORD *)p_Blink + 5) )
            v25 = 0LL;
          WPP_IFR_SF_qqLL(v23, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v12[-5].Blink, v25, 1u, 3u);
          v16 = *((_WORD *)p_Blink + 12);
          v24 = v16;
        }
        if ( v24 < 0 )
        {
          *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v12[-6]) - 32) = 3;
          v16 = *((_WORD *)p_Blink + 12);
        }
      }
      *((_WORD *)p_Blink + 13) = 3;
      if ( (v16 & 0x200) != 0 )
      {
        v26 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
        if ( v26->FxVerboseOn )
        {
          v27 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*((_WORD *)p_Blink + 5) )
            v27 = 0LL;
          WPP_IFR_SF_qqLL(v26, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v12[-5].Blink, v27, 3u, 4u);
          v16 = (__int16)v12[-3].Flink;
        }
        if ( (v16 & 0x80u) != 0 )
          *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v12[-6]) - 32) = 4;
      }
      *((_WORD *)p_Blink + 13) = 4;
      if ( FxObject::DisposeChildrenWorker((FxObject *)&v12[-5].Blink, FxObjectStateDeferedDisposing, v15, 0) )
      {
        v17 = *((_WORD *)p_Blink + 12);
        if ( (v17 & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v12[-5].Blink, v15, 0);
        }
        else
        {
          if ( (v17 & 0x200) != 0 )
          {
            v28 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
            if ( v28->FxVerboseOn )
            {
              v29 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*((_WORD *)p_Blink + 5) )
                v29 = 0LL;
              WPP_IFR_SF_qqLL(
                v28,
                5u,
                0x14u,
                0xAu,
                WPP_FxObject_hpp_Traceguids,
                &v12[-5].Blink,
                v29,
                *((unsigned __int16 *)p_Blink + 13),
                2u);
              v17 = (__int16)v12[-3].Flink;
            }
            if ( (v17 & 0x80u) != 0 )
              *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v12[-6]) - 32) = 2;
          }
          *((_WORD *)p_Blink + 13) = 2;
        }
        v18 = 1;
      }
      else
      {
        v18 = 0;
      }
LABEL_33:
      if ( !v18 )
        break;
LABEL_34:
      v12 = v12->Flink;
      if ( v12 == p_m_ChildListHead )
        goto LABEL_14;
    }
    v30 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    v22 = v30;
    goto LABEL_55;
  }
LABEL_14:
  if ( ((this->m_ObjectFlags & 0x800) == 0 || this->Dispose(this)) && (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  v13 = this->m_ObjectFlags;
  if ( (v13 & 0x200) != 0 )
  {
    v31 = this->m_Globals;
    if ( v31->FxVerboseOn )
    {
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qqLL(v31, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v32, this->m_ObjectState, 0xAu);
      v13 = this->m_ObjectFlags;
    }
    if ( (v13 & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
