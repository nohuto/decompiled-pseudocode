/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000B4A8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DA040 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@Z @ 0x1C0003EB8 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C000B71C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000B9A4 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _DWORD *PoolWithTag; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 12) = a3;
  v7 = (_QWORD *)((char *)this + 120);
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v8 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 72));
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v15 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v15);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = (char *)this + 32;
    *(_QWORD *)(v14 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v14);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *(_QWORD *)PoolWithTag = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 4;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 4;
    PoolWithTag[10] = 2;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>>::reset(
    (__int64 *)this + 15,
    (__int64)PoolWithTag);
  if ( *v7 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v7)(*v7) )
    {
      v10 = DMMVIDPNTARGET::_SetEmptyCofuncModeSet(this);
      v12 = v10;
      if ( v10 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = v12;
        WdLogEvent5_WdError(v18);
        *((_DWORD *)this + 18) = v12;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v17);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v7 + 8LL);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v16);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
