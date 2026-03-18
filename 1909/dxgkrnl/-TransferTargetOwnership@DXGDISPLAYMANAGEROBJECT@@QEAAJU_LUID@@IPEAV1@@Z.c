/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C028D668
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C028DBC0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C0049608 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004968C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C00496D8 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C00496F4 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CE84 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGFASTMUTEX *const *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _BYTE v22[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-40h] BYREF
  void **v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h]
  struct _LUID v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v11 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    v26 = a2;
    v27 = v5;
    v24 = &SetElement::`vftable';
    v25 = 0LL;
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
      goto LABEL_7;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
                (struct _LUID *)&v24,
                (struct _LUID)a4,
                (__int64)this,
                0,
                0) < 0 )
      goto LABEL_3;
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
    {
LABEL_7:
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v17[3] = v5;
      v17[4] = HighPart;
      v17[5] = a2.LowPart;
      WdLogEvent5_WdError(v17);
      v11 = -1073741275;
      goto LABEL_3;
    }
    v18 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v18) )
    {
      v19 = (_QWORD *)(v18 + 8);
      v20 = *(_QWORD *)(v18 + 8);
      if ( *(_QWORD *)(v20 + 8) != v18 + 8 || (v21 = *(_QWORD **)(v18 + 16), (_QWORD *)*v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v18 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, a4[2], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)(a4 + 5), v18) && v18 )
      (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = 226LL;
    WdLogEvent5_WdError(v12);
    v11 = -2147483611;
  }
LABEL_3:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  return v11;
}
