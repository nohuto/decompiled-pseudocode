/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0017DF4
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C012F840 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000A5C0 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00D96B8 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r11
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  if ( a2[6] == (struct DMMVIDPNTARGETMODESET *)(a2 + 6) )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v8);
    return 3223192329LL;
  }
  if ( a2 != *((struct DMMVIDPNTARGETMODESET ***)this + 14) )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
  v4 = (__int64 *)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  v6 = *(_QWORD *)(v5 + 144);
  if ( v6 )
  {
    v10 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)(a2 + 3), v6);
    if ( !v10 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode((DMMVIDPNTARGETMODESET *)a2, *(_DWORD *)(v10 + 24));
    v5 = *v4;
  }
  *(_BYTE *)(v5 + 136) = 0;
  if ( (unsigned __int64)*(int *)(*v4 + 96) > 1 )
  {
    v11 = *v4;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             *((_QWORD *)this + 15),
                             *v4) )
    {
      v13 = *(_QWORD **)(v12 + 24);
      v14 = (_QWORD *)(v11 + 8);
      if ( *v13 != v12 + 16 )
        __fastfail(3u);
      *v14 = v12 + 16;
      *(_QWORD *)(v11 + 16) = v13;
      *v13 = v14;
      *(_QWORD *)(v12 + 24) = v14;
      ++*(_QWORD *)(v12 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, (__int64)a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
  return 0LL;
}
