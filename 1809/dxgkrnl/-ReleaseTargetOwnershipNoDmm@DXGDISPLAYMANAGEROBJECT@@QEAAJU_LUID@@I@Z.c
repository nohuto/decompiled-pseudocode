/*
 * XREFs of ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C0256DF8
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C013908C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0042654 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r11
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _BYTE v18[16]; // [rsp+20h] [rbp-40h] BYREF
  void **v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+38h] [rbp-28h]
  struct _LUID v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+50h] [rbp-10h]
  LONG HighPart; // [rsp+7Ch] [rbp+1Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  if ( *((_QWORD *)this + 4) )
  {
    v21 = a2;
    v22 = v4;
    v19 = &SetElement::`vftable';
    v20 = 0LL;
    v10 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           v9 + 8,
           v10) )
    {
      v13 = (_QWORD *)(v10 + 8);
      v14 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v14 + 8) != v10 + 8 || (v15 = *(_QWORD **)(v10 + 16), (_QWORD *)*v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      --*(_QWORD *)(v12 + 40);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
      v8 = 0;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v16[4] = HighPart;
      v16[5] = a2.LowPart;
      v16[3] = v4;
      WdLogEvent5_WdError(v16);
      v8 = -1073741275;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 194LL;
    WdLogEvent5_WdError(v7);
    v8 = -2147483611;
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return v8;
}
