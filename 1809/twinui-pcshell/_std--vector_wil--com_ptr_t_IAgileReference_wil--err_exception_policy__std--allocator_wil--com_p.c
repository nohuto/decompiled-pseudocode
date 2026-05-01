/*
 * XREFs of _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch$40 @ 0x1800AD7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 96), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
