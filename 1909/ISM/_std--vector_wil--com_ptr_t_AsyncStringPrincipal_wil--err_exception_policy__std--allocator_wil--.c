/*
 * XREFs of _std::vector_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy_____::_Emplace_reallocate_AsyncStringPrincipal____::_1_::catch$38 @ 0x180117D1B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18012192C (-_Destroy@-$vector@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy_____::_Emplace_reallocate_AsyncStringPrincipal____::_1_::catch_38(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
