/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180106400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801067E4 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int64 *v10[2]; // [rsp+20h] [rbp-78h] BYREF
  char v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+38h] [rbp-60h]
  int v13; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 6,
    v10,
    a2);
  if ( v10[0] == *((__int64 **)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v5 = v10[0][4];
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  if ( v6 < 0 )
  {
    v7 = 183LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  v8 = *(_OWORD *)a2;
  v11[0] = 6;
  v12 = v8;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  v6 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v11);
  if ( v6 < 0 )
  {
    v7 = 191LL;
    goto LABEL_5;
  }
  v9 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v5 + 40LL))(v5, v10);
  result = 0LL;
  *(_OWORD *)a2 = v9;
  return result;
}
