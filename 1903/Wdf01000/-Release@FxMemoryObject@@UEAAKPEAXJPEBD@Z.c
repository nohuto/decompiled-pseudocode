/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002710
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x1C001B740 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0002780 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0056D78 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // ax
  _LIST_ENTRY *Flink; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
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
  FxObject::ProcessDestroy(this);
  return 0LL;
}
