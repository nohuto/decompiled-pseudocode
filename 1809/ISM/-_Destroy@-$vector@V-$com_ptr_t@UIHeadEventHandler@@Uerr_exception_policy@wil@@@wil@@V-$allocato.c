/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800473F8
 * Callers:
 *     _std::vector_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__&___ptr64__::_1_::catch$0 @ 0x18012FF3A (_std--vector_wil--com_ptr_t_IHeadEventHandler_wil--err_exception_policy__std--allocator_wil--com.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Destroy(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      if ( *v4 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
