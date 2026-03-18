/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0009930
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3680 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00FC77C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C00098B8 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  void **v7; // rcx
  char *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v13)(_QWORD); // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v7 = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v15 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)a3 + 18);
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7, a2);
      WdLogEvent5_WdAssertion(v17);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7, a2, a3);
    *(_QWORD *)(v16 + 24) = (char *)this + 32;
    *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v16);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *(_QWORD *)PoolWithTag = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 16;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 16;
    *((_DWORD *)PoolWithTag + 10) = 2;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v12 != v13 && v13 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v13)[2])(v13, 1LL);
  *((_QWORD *)this + 15) = v12;
  if ( v12 )
  {
    if ( (**v12)(v12) )
    {
      DMMVIDPNTARGET::_SetEmptyCofuncModeSet(this);
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v19 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v19);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v13, v9, v10, v11);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v18);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
