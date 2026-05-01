/*
 * XREFs of ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18013D600
 * Callers:
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x18013CACA (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x18013E5FE (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1801A0752 (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$0.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x1801A125D (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _ViewEventDispatcher::GetTopLevelHost_::_1_::dtor$1 @ 0x1802154AE (_ViewEventDispatcher--GetTopLevelHost_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$6 @ 0x18021C71E (_ViewEventDispatcher--ViewDestroyed_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::ViewNavigationLevelChanged_::_1_::dtor$2 @ 0x18021C863 (_ViewEventDispatcher--ViewNavigationLevelChanged_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x18021DC9A (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_HostChanged_::_1_::dtor$0 @ 0x18021FB18 (_ViewEventDispatcher--_HostChanged_--_1_--dtor$0.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$15 @ 0x180226D2E (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$15.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$6 @ 0x180292EAA (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$6.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__::_1_::dtor$2 @ 0x1802931A8 (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_1802931A8.c)
 *     _std::function_void___cdecl(Concurrency::task_bool_)_::function_void___cdecl(Concurrency::task_bool_)__::_1_::dtor$0 @ 0x180293200 (_std--function_void___cdecl(Concurrency--task_bool_)_--function_void___cdecl(Concurrency--task_b.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_Continue_::_1_::dtor$2 @ 0x18029579B (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_18029579B.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$0 @ 0x180296720 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perform_--_1_--dtor.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$6 @ 0x180296738 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perfor_ea_180296738.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
