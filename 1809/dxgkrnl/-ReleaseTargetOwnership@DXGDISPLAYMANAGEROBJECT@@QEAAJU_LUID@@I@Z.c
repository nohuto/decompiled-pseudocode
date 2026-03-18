/*
 * XREFs of ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C0256C88
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02574F0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0042654 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-40h] BYREF
  void **v17; // [rsp+40h] [rbp-30h]
  __int128 v18; // [rsp+48h] [rbp-28h]
  struct _LUID v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  LONG HighPart; // [rsp+9Ch] [rbp+2Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( *((_QWORD *)this + 4) )
  {
    v19 = a2;
    v20 = v4;
    v17 = &SetElement::`vftable';
    v18 = 0LL;
    v9 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v9) )
    {
      v11 = (_QWORD *)(v9 + 8);
      v12 = *(_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(v12 + 8) != v9 + 8 || (v13 = *(_QWORD **)(v9 + 16), (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      --*((_QWORD *)this + 10);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm((struct _LUID *)v9, 0LL, (struct _LUID)this, 0, 0);
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
      v8 = 0;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v14[4] = HighPart;
      v14[5] = a2.LowPart;
      v14[3] = v4;
      WdLogEvent5_WdError(v14);
      v8 = -1073741275;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 160LL;
    WdLogEvent5_WdError(v7);
    v8 = -2147483611;
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v8;
}
