/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0063288
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C005E690 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C005E778 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C005E8C8 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018C40 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, unsigned int Index, _LIST_ENTRY *Object)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  const void *v7; // rdi
  int v9; // esi
  FxCollectionInternal *v10; // rcx
  FX_POOL_TRACKER *Entry; // r8
  int v12; // r9d
  FxResourceCollection *p_Blink; // rax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  p_m_Globals = &this->m_Globals;
  if ( (this->m_AccessFlags & 1) != 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v9 = 0;
    Entry = (FX_POOL_TRACKER *)FxCollectionInternal::AllocateEntry(v10, *p_m_Globals);
    if ( Entry )
    {
      if ( Index == -1 || Index == this->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_16:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)&Entry->Link.Blink;
        Entry->Link.Blink = p_m_ListHead;
        Entry->Pool = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)&Entry->Link.Blink;
        Entry->Link.Flink = Object;
        FxObject::AddRef(
          (FxObject *)Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++this->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        v12 = 0;
        p_Blink = (FxResourceCollection *)&this->m_ListHead.Flink[-1].Blink;
        while ( p_Blink != (FxResourceCollection *)&this->FxCollectionInternal )
        {
          p_m_ListHead = (_LIST_ENTRY *)&p_Blink->m_Type;
          if ( v12 == Index )
          {
            if ( p_Blink != (FxResourceCollection *)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = (FxResourceCollection *)&p_m_ListHead->Flink[-1].Blink;
          ++v12;
        }
        FxPoolFree(Entry);
        v9 = -1073741684;
      }
    }
    else
    {
      v9 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Entry);
    if ( v9 < 0 )
    {
      FxObject::ClearEvtCallbacks((FxObject *)Object);
      ((void (__fastcall *)(_LIST_ENTRY *))Object->Flink[3].Flink)(Object);
    }
    return (unsigned int)v9;
  }
  else
  {
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, v7, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 3221225506LL;
  }
}
