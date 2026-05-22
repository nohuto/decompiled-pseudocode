/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18014403C
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801443C4 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800D374C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180143E5C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@Z @ 0x180144264 (-erase@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointerMappi.c)
 */

__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 *i; // rax
  __int64 *v5; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int8 v6[24]; // [rsp+28h] [rbp-80h] BYREF
  char v7[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v8; // [rsp+48h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  (*(void (__fastcall **)(struct DWMCursor *, unsigned __int8 *))(*(_QWORD *)a2 + 40LL))(a2, v6);
  if ( !std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
          (_QWORD *)this + 6,
          v6) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      578LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  i = (__int64 *)*((_QWORD *)this + 15);
LABEL_4:
  for ( i = (__int64 *)*i; i != *((__int64 **)this + 15); i = v5 )
  {
    if ( *((_DWORD *)i + 6) != *(_DWORD *)v6 )
      goto LABEL_4;
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase(
      (char *)this + 112,
      &v5,
      i);
  }
  v7[0] = 1;
  v8 = *(_OWORD *)v6;
  DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v7);
  return 0LL;
}
