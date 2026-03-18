/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C00E54E0
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0005090 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0005110 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000519C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051E8 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C0005214 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r11
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v3 + 40) + 16LL) != CurrentThread )
    {
      v18 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
      WdLogEvent5_WdAssertion(v18);
    }
    v6 = Set<DMMVIDPN>::FindByValue(v3 + 96, (__int64)this);
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v3 + 104, v6) )
    {
      v8 = (_QWORD *)(v9 + 8);
      v7 = *(_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(v7 + 8) != v9 + 8 || (v10 = *(_QWORD **)(v9 + 16), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v7;
      *(_QWORD *)(v7 + 8) = v10;
      *v8 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      --*(_QWORD *)(v3 + 136);
    }
    v11 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v11 + 32) = v3;
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = this;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdWarning(v19);
  }
  v14 = *((_QWORD *)this + 39);
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, 1LL);
  v15 = *((_QWORD *)this + 38);
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24), v16, v17);
  *(_QWORD *)this = &SetElement::`vftable';
}
