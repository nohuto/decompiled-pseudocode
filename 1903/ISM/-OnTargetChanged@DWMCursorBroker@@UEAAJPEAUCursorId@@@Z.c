/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180143CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1800273E0 (-lower_bound@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180143E1C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x180169B28 (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int CursorDefaultState; // edi
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 *v11[2]; // [rsp+20h] [rbp-88h] BYREF
  char v12[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+38h] [rbp-70h]
  int v14; // [rsp+48h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::lower_bound(
    (_QWORD *)this + 6,
    v11,
    (unsigned __int8 *)a2);
  if ( v11[0] == *((__int64 **)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v5 = v11[0][4];
  CursorDefaultState = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  if ( CursorDefaultState < 0 )
  {
    v7 = 183LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  CursorDefaultState = GetCursorDefaultState(v8, v11);
  if ( CursorDefaultState < 0 )
  {
    v7 = 185LL;
    goto LABEL_5;
  }
  v9 = *(_OWORD *)a2;
  v12[0] = 6;
  v13 = v9;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  CursorDefaultState = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v12);
  if ( CursorDefaultState < 0 )
  {
    v7 = 191LL;
    goto LABEL_5;
  }
  v10 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v5 + 40LL))(v5, v11);
  result = 0LL;
  *(_OWORD *)a2 = v10;
  return result;
}
