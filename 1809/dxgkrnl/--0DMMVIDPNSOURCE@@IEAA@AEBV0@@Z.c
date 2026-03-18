/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AFBC
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004348 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@Z @ 0x1C0003EB8 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0007AD0 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000B9A4 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  __int64 *v4; // rdi
  _QWORD *v5; // rsi
  _DWORD *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6));
  *((_QWORD *)this + 5) = 0LL;
  v4 = (__int64 *)((char *)this + 104);
  *((_DWORD *)this + 14) = 1833173000;
  v5 = (_QWORD *)((char *)this + 112);
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
  v6 = operator new(0x30uLL, 0x4E506456u, PagedPool);
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 3) = v6 + 4;
    *((_QWORD *)v6 + 2) = v6 + 4;
    v6[10] = 2;
  }
  else
  {
    v6 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>>::reset(
    (__int64 *)this + 14,
    (__int64)v6);
  if ( !*v5 )
    goto LABEL_17;
  if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD))*v5)(*v5) )
  {
    v12 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v12);
    v13 = *(_DWORD *)(*v5 + 8LL);
    goto LABEL_20;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v7 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v7 )
      v8 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v7, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v8 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, (__int64)v8);
    if ( *v4 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(*v4 + 24))(*v4 + 24) )
      {
        v9 = *v4;
        if ( *(_QWORD *)(v9 + 112) )
        {
          v15 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v15);
        }
        *(_QWORD *)(v9 + 112) = this;
        goto LABEL_13;
      }
      v14 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v14);
      v13 = *(_DWORD *)(*v4 + 40);
LABEL_20:
      *((_DWORD *)this + 18) = v13;
      return this;
    }
LABEL_17:
    v11 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v11);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_13:
  *((_DWORD *)this + 22) = 2;
  return this;
}
