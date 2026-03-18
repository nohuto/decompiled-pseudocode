/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01412CC
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C0141290 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001DB50 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0042654 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(struct DXGFASTMUTEX *const *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( !*((_QWORD *)this + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 582LL;
    WdLogEvent5_WdAssertion(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 24) = 0;
  while ( 1 )
  {
    v3 = (char *)(this + 5);
    if ( *((struct DXGFASTMUTEX *const **)this + 8) == this + 8 )
      break;
    v6 = Set<DXGTARGETENTRY>::FindByValue((__int64)v3);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           v5 + 8,
           v6) )
    {
      v10 = (_QWORD *)(v6 + 8);
      v11 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v11 + 8) != v6 + 8 || (v12 = *(_QWORD **)(v6 + 16), (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      --*(_QWORD *)(v8 + 40);
    }
    else
    {
      v6 = 0LL;
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 590LL;
      WdLogEvent5_WdAssertion(v9);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v6, 0LL, this, 0LL, 0);
    if ( v6 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 24LL))(v3);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)(this + 12));
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
