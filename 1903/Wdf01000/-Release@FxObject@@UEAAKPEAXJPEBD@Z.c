/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0001CB0
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000E028 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C0050710 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0056D78 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C005C118 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005DC20 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, FxObjectDebugLeakDetection *Tag, __int64 Line, const char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v8; // rbp
  unsigned __int16 m_ObjectSize; // ax
  _QWORD *v10; // r14
  void (__fastcall *v11)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  void (__fastcall *v12)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  FxTagTracker *m_Lock; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( v5 )
    return v5;
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    return v5;
  }
  if ( (m_ObjectFlags & 0x80u) != 0 )
    v8 = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
  else
    v8 = 0LL;
  if ( v8 )
  {
    FxTagTracker::CheckForAbandondedTags(v8);
    m_ObjectFlags = this->m_ObjectFlags;
  }
  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize && (m_ObjectFlags & 8) != 0 )
  {
    v10 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
    if ( v10 )
    {
      do
      {
        v11 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v10[2];
        if ( v11 )
        {
          v11((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
          v10[2] = 0LL;
        }
        v12 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v10[3];
        if ( v12 )
        {
          v12((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
          v10[3] = 0LL;
        }
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 );
      m_ObjectSize = this->m_ObjectSize;
    }
    LOBYTE(Tag) = 1;
    if ( m_ObjectSize )
    {
      v13 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
      if ( v13 )
      {
        do
        {
          v14 = (_QWORD *)v13[1];
          if ( !(_BYTE)Tag )
            FxPoolFree(v13);
          LOBYTE(Tag) = 0;
          v13 = v14;
        }
        while ( v14 );
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(this[-1].m_ChildEntry.Blink) )
    {
      _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( this->m_Type == 4098
        && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
      {
        Tag = this->m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(&Tag->LimitScaled, -Tag->Limit);
      }
    }
  }
  if ( v8 )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::`scalar deleting destructor'(v8, (unsigned int)Tag);
  }
  ((void (__fastcall *)(FxObject *, FxObjectDebugLeakDetection *, __int64, const char *))this->SelfDestruct)(
    this,
    Tag,
    Line,
    File);
  return 0LL;
}
