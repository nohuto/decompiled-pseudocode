/*
 * XREFs of ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x18008BC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x18007D37C (--0-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBam.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007FFC4 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uer_ea_18007FFC4.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerDisconnected(
        MPCManagerConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx
  void (__fastcall ***v3)(_QWORD); // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 19);
  wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
    &v5,
    (__int64)a2);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    (__int64 *)(v2 + 72),
    &v5);
  if ( v5 )
  {
    v3 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5);
    (**v3)(v3);
  }
  return 0LL;
}
