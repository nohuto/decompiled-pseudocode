/*
 * XREFs of ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180086740
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085DDC (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180084E38 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180085ADC (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180086ED0 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_pol_ea_180086ED0.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800871E0 (-find@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 */

void __fastcall MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(
        MPCGestureHandlerManager *this,
        int a2)
{
  __int64 *v2; // rbx
  const char *v4; // r9
  const char *v5; // r9
  char *v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  char v11; // [rsp+40h] [rbp+10h] BYREF
  int v12; // [rsp+48h] [rbp+18h] BYREF

  v12 = a2;
  v2 = (__int64 *)((char *)this + 8);
  if ( *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::find(
                    (char *)this + 8,
                    &v11,
                    &v12) == *((_QWORD *)this + 1) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      205LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v4);
    __debugbreak();
  }
  std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
    v2,
    (__int64)v9,
    &v12);
  if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 40LL) + 168LL) & 0xFFFFFF7F) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      207LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
    __debugbreak();
  }
  std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
    v2,
    (__int64)v9,
    &v12);
  *(_DWORD *)(*(_QWORD *)(v9[0] + 40LL) + 912LL) = 0;
  std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
    v2,
    (__int64)v9,
    &v12);
  v6 = (char *)*((_QWORD *)this + 6);
  v7 = (__int64 *)(v9[0] + 40LL);
  if ( *((char **)this + 7) == v6 )
  {
    std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
      (char **)this + 5,
      v6,
      v7);
  }
  else
  {
    v8 = *v7;
    *(_QWORD *)v6 = *v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)this + 6) += 8LL;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    v2,
    &v12);
}
