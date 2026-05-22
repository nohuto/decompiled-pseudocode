/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x1801439F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x180013AE4 (-lower_bound@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointe.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1800273E0 (-lower_bound@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  __int64 v6; // rdx
  __int64 result; // rax
  struct ICursor *v8; // rbx
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&v10 = __PAIR64__(a3, a2);
  std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::lower_bound(
    (_QWORD *)this + 14,
    &v9,
    (unsigned __int8 *)&v10);
  if ( v9 == *((__int64 **)this + 15) )
  {
    v6 = 649LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v10 = *(_OWORD *)(v9 + 3);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::lower_bound(
    (_QWORD *)this + 6,
    &v9,
    (unsigned __int8 *)&v10);
  if ( v9 == *((__int64 **)this + 7) )
  {
    v6 = 656LL;
    goto LABEL_3;
  }
  v8 = (struct ICursor *)v9[4];
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v8 + 8LL))(v8);
  result = 0LL;
  *a4 = v8;
  return result;
}
