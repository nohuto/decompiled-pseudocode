/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18009A844
 * Callers:
 *     _std::vector_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_IApplicationView_____ptr64_&___ptr64__::_1_::catch$38 @ 0x180096767 (_std--vector_wil--com_ptr_t_IApplicationView_wil--err_exception_policy__std--allocator_wil--com_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
