/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1800109E8
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800103E4 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$emplace@AEBUCursorId@@AEAPEAVDWMCursor@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x18001160C (--$emplace@AEBUCursorId@@AEAPEAVDWMCursor@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@V12@@2@AEBUCursorId@@@Z @ 0x180012028 (-equal_range@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1800273E0 (-lower_bound@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180143784 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v2; // rax
  struct DWMCursor *v3; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  struct DWMCursor *v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v12[16]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = *(_QWORD *)a2;
  v3 = a2;
  v10 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, _BYTE *))(v2 + 40))(a2, v12);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::equal_range(
    (char *)this + 48,
    v11,
    v12);
  v5 = (_QWORD *)v11[0];
  v6 = 0LL;
  while ( v5 != (_QWORD *)v11[1] )
  {
    v5 = (_QWORD *)*v5;
    ++v6;
  }
  if ( v6 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      (int)v10);
    __debugbreak();
  }
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::lower_bound(
    (char *)this + 48,
    v11,
    v12);
  if ( v11[0] == *((_QWORD *)this + 7) )
  {
    std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::emplace<CursorId const &,DWMCursor * &>(
      (char *)this + 48,
      v11,
      v12,
      &v10);
    v3 = v10;
  }
  else
  {
    *(_QWORD *)(v11[0] + 32LL) = v3;
  }
  v7 = 0;
  v8 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v8 )
      DWMCursorBroker::CreateMotionTransformAndVerifySend(this, v3, v7);
    ++v7;
    v8 += 3;
  }
  while ( v7 < 0xA );
  return 0LL;
}
