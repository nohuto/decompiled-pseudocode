/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00040DC
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00DF5A0 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00059C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00557B8 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01321DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET **a2,
        __int64 a3)
{
  struct DMMVIDPNSOURCEMODESET **v5; // rsi
  struct DMMVIDPNSOURCEMODESET *v6; // rax
  struct DMMVIDPNSOURCEMODESET *v8; // r14
  __int64 v9; // r11
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    v12 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v12);
    return 3223192328LL;
  }
  if ( a2 != (struct DMMVIDPNSOURCEMODESET **)this[15] )
  {
    v13 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v13);
    return 3223192368LL;
  }
  v5 = this + 13;
  v6 = this[13];
  if ( *((_QWORD *)v6 + 18) )
  {
    v14 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
    if ( !v14 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
      WdLogEvent5_WdError(v18);
      return 3223192338LL;
    }
    DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v14 + 24));
    v6 = *v5;
  }
  *((_BYTE *)v6 + 136) = 0;
  if ( (unsigned __int64)*((int *)*v5 + 24) > 1 )
  {
    v8 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                             this[14],
                             *v5) )
    {
      v10 = *(_QWORD **)(v9 + 24);
      v11 = (_QWORD *)((char *)v8 + 8);
      if ( *v10 != v9 + 16 )
        __fastfail(3u);
      *v11 = v9 + 16;
      *((_QWORD *)v8 + 2) = v10;
      *v10 = v11;
      *(_QWORD *)(v9 + 24) = v11;
      ++*(_QWORD *)(v9 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 15, 0LL);
  return 0LL;
}
