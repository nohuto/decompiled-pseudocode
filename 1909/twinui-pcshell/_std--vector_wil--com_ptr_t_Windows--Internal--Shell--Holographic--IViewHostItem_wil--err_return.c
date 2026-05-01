/*
 * XREFs of _std::vector_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_____::_Emplace_reallocate_Windows::Internal::Shell::Holographic::IViewHostItem___&__::_1_::catch$38 @ 0x18012B6CF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18013B2A4 (-_Destroy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_____::_Emplace_reallocate_Windows::Internal::Shell::Holographic::IViewHostItem______::_1_::catch_38(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
