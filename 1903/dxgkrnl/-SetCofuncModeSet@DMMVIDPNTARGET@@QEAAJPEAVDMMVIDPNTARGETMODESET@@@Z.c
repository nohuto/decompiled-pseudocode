/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0018C4C
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C013D100 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005C08 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00495DC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00E636C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETMODESET **a2,
        __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rax

  if ( a2[6] == (struct DMMVIDPNTARGETMODESET *)(a2 + 6) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v9);
    return 3223192329LL;
  }
  if ( a2 != *((struct DMMVIDPNTARGETMODESET ***)this + 14) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  v5 = (__int64 *)((char *)this + 104);
  v6 = *((_QWORD *)this + 13);
  v7 = *(_QWORD *)(v6 + 144);
  if ( v7 )
  {
    v11 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)(a2 + 3), v7);
    if ( !v11 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode((DMMVIDPNTARGETMODESET *)a2, *(_DWORD *)(v11 + 24));
    v6 = *v5;
  }
  *(_BYTE *)(v6 + 136) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96) > 1 )
  {
    v12 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             *((_QWORD *)this + 15),
                             *v5) )
    {
      v14 = *(_QWORD **)(v13 + 24);
      v15 = (_QWORD *)(v12 + 8);
      if ( *v14 != v13 + 16 )
        __fastfail(3u);
      *v15 = v13 + 16;
      *(_QWORD *)(v12 + 16) = v14;
      *v14 = v15;
      *(_QWORD *)(v13 + 24) = v15;
      ++*(_QWORD *)(v13 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, (__int64)a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
  return 0LL;
}
