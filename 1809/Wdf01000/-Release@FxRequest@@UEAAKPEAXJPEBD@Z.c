/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00509AC (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00573C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C005BCB8 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005DA6C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C007A63C (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, FxObjectDebugLeakDetection *Tag, __int64 Line, const char *File)
{
  unsigned __int8 m_IrpAllocation; // bp
  unsigned __int8 m_Reserved; // r14
  unsigned __int8 m_CanComplete; // cl
  unsigned __int32 v8; // esi
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v11; // r12
  unsigned __int16 m_ObjectSize; // ax
  _QWORD *v13; // rdi
  void (__fastcall *v14)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  void (__fastcall *v15)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v23; // dl
  unsigned __int8 PreviousIrql[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v25; // [rsp+70h] [rbp+8h]

  m_IrpAllocation = this->m_IrpAllocation;
  m_Reserved = this->m_Reserved;
  m_CanComplete = this->m_CanComplete;
  v25 = m_CanComplete;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
    m_CanComplete = v25;
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
        v11 = this[-1].m_OwnerListEntry2.Blink;
      else
        v11 = 0LL;
      if ( v11 )
      {
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v11);
        m_ObjectFlags = this->m_ObjectFlags;
      }
      m_ObjectSize = this->m_ObjectSize;
      if ( m_ObjectSize && (m_ObjectFlags & 8) != 0 )
      {
        v13 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
        if ( v13 )
        {
          do
          {
            v14 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v13[2];
            if ( v14 )
            {
              v14((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
              v13[2] = 0LL;
            }
            v15 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v13[3];
            if ( v15 )
            {
              v15((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
              v13[3] = 0LL;
            }
            v13 = (_QWORD *)v13[1];
          }
          while ( v13 );
          m_ObjectSize = this->m_ObjectSize;
        }
        LOBYTE(Tag) = 1;
        if ( m_ObjectSize )
        {
          v16 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
          if ( v16 )
          {
            do
            {
              v17 = (_QWORD *)v16[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v16);
              LOBYTE(Tag) = 0;
              v16 = v17;
            }
            while ( v17 );
          }
        }
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(this[-1].m_ForwardProgressQueue) )
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
      if ( v11 )
      {
        this[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v11, (unsigned int)Tag);
      }
      ((void (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))this->SelfDestruct)(
        this,
        Tag,
        Line,
        File);
    }
    m_CanComplete = v25;
  }
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v8 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          m_Irp = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(m_Irp, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            FxNonPagedObject::Lock(m_IoQueue, PreviousIrql);
            --m_IoQueue->m_TwoPhaseCompletions;
            v23 = PreviousIrql[0];
            --m_IoQueue->m_DriverIoCount;
            FxIoQueue::DispatchInternalEvents(m_IoQueue, v23);
          }
        }
      }
    }
  }
  return v8;
}
