/*
 * XREFs of ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028D0A8
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C0149D24 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00495DC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0049644 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r11
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-40h] BYREF
  void **v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+38h] [rbp-28h]
  struct _LUID v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+50h] [rbp-10h]
  LONG HighPart; // [rsp+7Ch] [rbp+1Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( *((_QWORD *)this + 4) )
  {
    v25 = a2;
    v26 = v4;
    v23 = &SetElement::`vftable';
    v24 = 0LL;
    v12 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           v11 + 8,
           v12) )
    {
      v17 = (_QWORD *)(v12 + 8);
      v18 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(v18 + 8) != v12 + 8 || (v19 = *(_QWORD **)(v12 + 16), (_QWORD *)*v19 != v17) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      --*(_QWORD *)(v16 + 40);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
      v10 = 0;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
      v20[4] = HighPart;
      v20[5] = a2.LowPart;
      v20[3] = v4;
      WdLogEvent5_WdError(v20);
      v10 = -1073741275;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = 194LL;
    WdLogEvent5_WdError(v9);
    v10 = -2147483611;
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return v10;
}
