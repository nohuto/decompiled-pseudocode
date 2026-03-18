/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C0256FA8
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02574F0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C0042568 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C0042638 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0042654 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGFASTMUTEX *const *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _BYTE v18[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-40h] BYREF
  void **v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h]
  struct _LUID v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v9 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    v22 = a2;
    v23 = v5;
    v20 = &SetElement::`vftable';
    v21 = 0LL;
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
      goto LABEL_7;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
                (struct _LUID *)&v20,
                (__int64)a4,
                (struct _LUID)this,
                0,
                0) < 0 )
      goto LABEL_3;
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v13[3] = v5;
      v13[4] = HighPart;
      v13[5] = a2.LowPart;
      WdLogEvent5_WdError(v13);
      v9 = -1073741275;
      goto LABEL_3;
    }
    v14 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v14) )
    {
      v15 = (_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)(v14 + 8);
      if ( *(_QWORD *)(v16 + 8) != v14 + 8 || (v17 = *(_QWORD **)(v14 + 16), (_QWORD *)*v17 != v15) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v14 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, a4[2], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)(a4 + 5), v14) && v14 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 226LL;
    WdLogEvent5_WdError(v10);
    v9 = -2147483611;
  }
LABEL_3:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
  return v9;
}
