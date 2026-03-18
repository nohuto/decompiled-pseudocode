/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C000BD0C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000BBA0 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000BEE4 (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  __int64 v5; // rax
  char *PoolWithTag; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  DMMVIDPNTARGETMODESET *v9; // rax
  DMMVIDPNTARGETMODESET *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v14 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v5 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v5;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
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
    v7 = 0LL;
  }
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v7 != v8 && v8 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v8)[2])(v8, 1LL);
  *((_QWORD *)this + 15) = v7;
  if ( !v7 )
    goto LABEL_23;
  if ( !(**v7)(v7) )
  {
    v16 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v16);
    v17 = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    goto LABEL_26;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v9 = (DMMVIDPNTARGETMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
    if ( v9 )
      v10 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v9, *((const struct DMMVIDPNTARGETMODESET **)a2 + 13));
    else
      v10 = 0LL;
    v11 = *((_QWORD *)this + 13);
    if ( v11 && v10 != (DMMVIDPNTARGETMODESET *)v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
    *((_QWORD *)this + 13) = v10;
    if ( v10 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v10 + 3))((__int64)v10 + 24) )
      {
        v12 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v12 + 112) )
        {
          v19 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v19);
        }
        *(_QWORD *)(v12 + 112) = this;
        goto LABEL_19;
      }
      v18 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v18);
      v17 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_26:
      *((_DWORD *)this + 18) = v17;
      return this;
    }
LABEL_23:
    v15 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v15);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_19:
  *((_DWORD *)this + 22) = 2;
  return this;
}
