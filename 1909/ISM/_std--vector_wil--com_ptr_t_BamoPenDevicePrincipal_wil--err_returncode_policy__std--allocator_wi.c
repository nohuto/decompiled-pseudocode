/*
 * XREFs of _std::vector_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy____::_1_::catch$36 @ 0x180126C9B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18012192C (-_Destroy@-$vector@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy____::_1_::catch_36(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 96),
    *(__int64 **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
