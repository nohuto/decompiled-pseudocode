/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C014847C
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C0148440 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001A920 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00495DC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0049644 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CA74 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(struct DXGFASTMUTEX *const *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v6 + 24) = 576LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 24) = 0;
  while ( 1 )
  {
    v4 = (char *)(this + 5);
    if ( *((struct DXGFASTMUTEX *const **)this + 8) == this + 8 )
      break;
    v7 = Set<DXGTARGETENTRY>::FindByValue((__int64)v4);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v7) )
    {
      v11 = (_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v12 + 8) != v7 + 8 || (v13 = *(_QWORD **)(v7 + 16), (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v7 = 0LL;
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v10);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v7, 0LL, this, 0LL, 0);
    if ( v7 )
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 24LL))(v4);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
    (__int64)(this + 12),
    v5);
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
