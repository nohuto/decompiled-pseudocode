/*
 * XREFs of ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x1801879F8
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x180186E81 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_ParsedTaskbarLayou.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x180188D91 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1802068E1 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_ParsedPenWorkspace.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x180207499 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x180292B04 (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$15 @ 0x18029C1D6 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$15.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$6 @ 0x18030B85B (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$6.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__::_1_::dtor$2 @ 0x18030BACE (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_18030BACE.c)
 *     _std::function_void___cdecl(IApplicationView___IImmersiveMonitor__)_::function_void___cdecl(IApplicationView___IImmersiveMonitor__)__::_1_::dtor$0 @ 0x18030BB24 (_std--function_void___cdecl(IApplicationView___IImmersiveMonitor__)_--function_void___cdecl(IApp.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_Continue_::_1_::dtor$2 @ 0x18030D4DB (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_18030D4DB.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$0 @ 0x18030E008 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perform_--_1_--dtor.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$6 @ 0x18030E020 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perfor_ea_18030E020.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$0 @ 0x1803BBA83 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::HandleView_::_1_::dtor$0 @ 0x1803BC950 (_UwpPrimaryAppProxy--HandleView_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViews_::_1_::dtor$0 @ 0x1803BD724 (_UwpPrimaryAppProxy--RelayoutAppViews_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor$0 @ 0x1803BD87A (_UwpPrimaryAppProxy--RelayoutAppViewsInternal_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RemoveView_::_1_::dtor$0 @ 0x1803BDA47 (_UwpPrimaryAppProxy--RemoveView_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$1 @ 0x180425F72 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180425F72.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$2 @ 0x180425F7E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180425F7E.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$3 @ 0x180425F8A (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180425F8A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
