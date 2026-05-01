/*
 * XREFs of _std::vector_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__const_&___ptr64__::_1_::catch$38 @ 0x1800AF026
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18022D340 (-_Destroy@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__const_____ptr64__::_1_::catch_38(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
