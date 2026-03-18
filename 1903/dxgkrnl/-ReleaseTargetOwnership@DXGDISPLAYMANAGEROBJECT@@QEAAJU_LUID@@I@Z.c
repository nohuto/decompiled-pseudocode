/*
 * XREFs of ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028CF38
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C028D7B0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00495DC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0049644 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CA74 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _BYTE v20[16]; // [rsp+30h] [rbp-40h] BYREF
  void **v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+48h] [rbp-28h]
  struct _LUID v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+60h] [rbp-10h]
  LONG HighPart; // [rsp+9Ch] [rbp+2Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( *((_QWORD *)this + 4) )
  {
    v23 = a2;
    v24 = v4;
    v21 = &SetElement::`vftable';
    v22 = 0LL;
    v11 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v11) )
    {
      v15 = (_QWORD *)(v11 + 8);
      v16 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)(v16 + 8) != v11 + 8 || (v17 = *(_QWORD **)(v11 + 16), (_QWORD *)*v17 != v15) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      --*((_QWORD *)this + 10);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm((struct _LUID *)v11, 0LL, (__int64)this, 0, 0);
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      v10 = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v18[4] = HighPart;
      v18[5] = a2.LowPart;
      v18[3] = v4;
      WdLogEvent5_WdError(v18);
      v10 = -1073741275;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = 160LL;
    WdLogEvent5_WdError(v9);
    v10 = -2147483611;
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return v10;
}
