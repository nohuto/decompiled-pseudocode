/*
 * XREFs of ??1MPCManager@@UEAA@XZ @ 0x18003EB8C
 * Callers:
 *     ??_EMPCManager@@UEAAPEAXI@Z @ 0x18003EB50 (--_EMPCManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x18003E984 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_p.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::~MPCManager(MPCManager *this)
{
  void **v2; // rbx
  const char *v3; // r9
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  v2 = (void **)((char *)this + 72);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    (__int64 ***)this + 9,
    &v10,
    **((__int64 ***)this + 9),
    *((__int64 **)this + 9));
  operator delete(*v2, (const struct std::nothrow_t *)0x30);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    (**v5)(v5);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = _InterlockedDecrement(v7 + 2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v3);
      JUMPOUT(0x18003EC69LL);
    }
    if ( !v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
