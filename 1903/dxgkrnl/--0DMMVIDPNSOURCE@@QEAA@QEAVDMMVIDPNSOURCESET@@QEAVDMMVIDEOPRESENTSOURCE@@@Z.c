/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0004170
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00FC77C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C0004138 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x1C0004388 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0005FFC (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _DWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6));
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  v9 = (_QWORD *)((char *)this + 112);
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
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v13 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v13);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v12 + 24) = (char *)this + 32;
    *(_QWORD *)(v12 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v12);
  }
  v10 = operator new[](0x30uLL, 0x4E506456u, PagedPool);
  if ( v10 )
  {
    v10[2] = 0;
    *(_QWORD *)v10 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 3) = v10 + 4;
    *((_QWORD *)v10 + 2) = v10 + 4;
    v10[10] = 2;
  }
  else
  {
    v10 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 14,
    (__int64)v10);
  if ( *v9 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v9)(*v9) )
    {
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this);
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v15 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v15);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v9 + 8LL);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v14);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
