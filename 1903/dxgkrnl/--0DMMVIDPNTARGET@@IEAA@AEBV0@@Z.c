/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0008F40
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C0008B20 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  _QWORD *v4; // rbp
  __int64 v6; // rax
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  char *v32; // r8
  _QWORD *v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v39 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v39 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v39);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v6 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 72));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
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
    v11 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v11 != v12 && v12 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v12)[2])(v12, 1LL);
  *((_QWORD *)this + 15) = v11;
  if ( !v11 )
    goto LABEL_57;
  if ( !(**v11)(v11) )
  {
    v41 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v41 + 24) = this;
    *(_QWORD *)(v41 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v41);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v13 = ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
  v14 = v13;
  if ( v13 )
  {
    v15 = *((_QWORD *)a2 + 13);
    v13[1] = 0LL;
    v13[2] = 0LL;
    *v13 = &SetElement::`vftable';
    v13[3] = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    *((_DWORD *)v13 + 10) = 0;
    v13[4] = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
    *((_DWORD *)v13 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 32))(v15 + 32)
      || !*(_QWORD *)(v15 + 48)
      || !*(_QWORD *)(v15 + 56) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v42 + 24) = 155LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v18 = v14 + 6;
    v14[7] = v14 + 6;
    v14[6] = v14 + 6;
    v14[8] = 0LL;
    v19 = *(_QWORD **)(v15 + 48);
    if ( v19 != (_QWORD *)(v15 + 48) )
      v4 = v19 - 1;
    v20 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v28 = (char *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x4B677844u);
        v32 = v28;
        if ( !v28 )
          break;
        v33 = v28 + 8;
        *((_QWORD *)v28 + 2) = 0LL;
        v16 = 0LL;
        *((_QWORD *)v28 + 1) = 0LL;
        *(_QWORD *)v28 = &SetElement::`vftable';
        *((_DWORD *)v28 + 6) = *((_DWORD *)v4 + 6);
        *(_OWORD *)(v28 + 72) = *(_OWORD *)(v4 + 9);
        *(_OWORD *)(v28 + 88) = *(_OWORD *)(v4 + 11);
        *(_OWORD *)(v28 + 104) = *(_OWORD *)(v4 + 13);
        *((_QWORD *)v28 + 15) = v4[15];
        *((_QWORD *)v28 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v28 + 5) = 0LL;
        *((_QWORD *)v28 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v28 + 14) = *((_DWORD *)v4 + 14);
        *(_QWORD *)v28 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v28 + 4) = &DMMVIDPNTARGETMODE::`vftable'{for `ContainedBy<DMMVIDPNTARGETMODESET>'};
        *((_QWORD *)v28 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v28 + 8) = &DMMVIDPNTARGETMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v28 + 32) = *((_DWORD *)v4 + 32);
        *((_DWORD *)v28 + 33) = *((_DWORD *)v4 + 33);
        *((_DWORD *)v28 + 34) = *((_DWORD *)v4 + 34);
        v19 = (_QWORD *)*v18;
        if ( (_QWORD *)*v18 != v18 )
          v16 = *v18 - 8LL;
        if ( !v16 )
          goto LABEL_42;
        do
        {
          if ( (char *)v16 == v32 )
            break;
          v34 = *(_QWORD **)(v16 + 8);
          v16 = (__int64)(v34 - 1);
          if ( v34 == v18 )
            v16 = 0LL;
        }
        while ( v16 );
        if ( !v16 )
        {
LABEL_42:
          v35 = (_QWORD *)v14[7];
          if ( (_QWORD *)*v35 != v18 )
            __fastfail(3u);
          *v33 = v18;
          v33[1] = v35;
          *v35 = v33;
          v14[7] = v33;
          ++v14[8];
        }
        v36 = v4[1];
        v4 = (_QWORD *)(v36 - 8);
        if ( v36 == v15 + 48 )
          v4 = 0LL;
        if ( !v4 )
        {
          v20 = v14[8];
          goto LABEL_18;
        }
      }
      v43 = WdLogNewEntry5_WdLowResource(v30, v29, 0LL, v31);
      *(_QWORD *)(v43 + 24) = 172LL;
      WdLogEvent5_WdLowResource(v43);
      *((_DWORD *)v14 + 10) = -1073741801;
    }
    else
    {
LABEL_18:
      if ( v20 != *(_QWORD *)(v15 + 64) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v19, v16);
        *(_QWORD *)(v44 + 24) = 186LL;
        WdLogEvent5_WdAssertion(v44);
      }
      *((_DWORD *)v14 + 18) = 2;
    }
    *((_DWORD *)v14 + 20) = 0;
    v14[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v14[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v14 + 24) = 1;
    *((_BYTE *)v14 + 136) = 1;
    v14[14] = 0LL;
    *((_DWORD *)v14 + 32) = 1833173005;
    *v14 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v14[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v14[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v14[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v14[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v14[4])(v14 + 4) )
    {
      v22 = (_QWORD *)v14[6];
      if ( v22 != v14 + 6 )
      {
        v37 = v22 - 1;
        while ( v37 )
        {
          if ( v37[5] )
          {
            v45 = WdLogNewEntry5_WdAssertion(v21, v8);
            WdLogEvent5_WdAssertion(v45);
          }
          v37[5] = v14;
          v38 = (_QWORD *)v37[1];
          v37 = v38 - 1;
          if ( v38 == v14 + 6 )
            v37 = 0LL;
        }
      }
      v23 = *(_QWORD *)(v15 + 144);
      v14[18] = v23 ? IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)(v14 + 3), *(_DWORD *)(v23 + 24)) : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v14 + 10);
    }
  }
  else
  {
    v14 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 13);
  if ( v12 && v14 != v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 11), v8, v9);
  *((_QWORD *)this + 13) = v14;
  if ( !v14 )
  {
LABEL_57:
    v40 = WdLogNewEntry5_WdLowResource(v12, v8, v9, v10);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v40);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v14[3])(v14 + 3) )
  {
    v46 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v46 + 24) = this;
    *(_QWORD *)(v46 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v46);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v26 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v26 + 112) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v25, v24);
    WdLogEvent5_WdAssertion(v47);
  }
  *(_QWORD *)(v26 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
