/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0004AC4
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004954 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0004E90 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  int v2; // eax
  char *PoolWithTag; // rax
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v8; // rax
  DMMVIDPNSOURCEMODESET *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v13 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v13 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 3;
  *((_DWORD *)this + 22) = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
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
    v6 = 0LL;
  }
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v6 != v7 && v7 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v7)[2])(v7, 1LL);
  *((_QWORD *)this + 14) = v6;
  if ( !v6 )
    goto LABEL_23;
  if ( !(**v6)(v6) )
  {
    v15 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v15);
    v16 = *(_DWORD *)(*((_QWORD *)this + 14) + 8LL);
    goto LABEL_26;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v8 = (DMMVIDPNSOURCEMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
    if ( v8 )
      v9 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v8, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v9 = 0LL;
    v10 = *((_QWORD *)this + 13);
    if ( v10 && v9 != (DMMVIDPNSOURCEMODESET *)v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
    *((_QWORD *)this + 13) = v9;
    if ( v9 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 3))((__int64)v9 + 24) )
      {
        v11 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v11 + 112) )
        {
          v18 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v18);
        }
        *(_QWORD *)(v11 + 112) = this;
        goto LABEL_19;
      }
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v17);
      v16 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_26:
      *((_DWORD *)this + 18) = v16;
      return this;
    }
LABEL_23:
    v14 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v14);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_19:
  *((_DWORD *)this + 22) = 2;
  return this;
}
