/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18012192C
 * Callers:
 *     _std::vector_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy_____::_Emplace_reallocate_AsyncStringPrincipal____::_1_::catch$38 @ 0x180117D1B (_std--vector_wil--com_ptr_t_AsyncStringPrincipal_wil--err_exception_policy__std--allocator_wil--.c)
 *     _std::vector_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy____::_1_::catch$36 @ 0x180126C9B (_std--vector_wil--com_ptr_t_BamoPenDevicePrincipal_wil--err_returncode_policy__std--allocator_wi.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
