/*
 * XREFs of ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x180168668
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x180167AF1 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_ParsedTaskbarLayou.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x180169A01 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1801E76A1 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_ParsedPenWorkspace.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x1801E8259 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x180273634 (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$15 @ 0x18027CD06 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$15.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$6 @ 0x1802EC39B (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$6.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__::_1_::dtor$2 @ 0x1802EC60E (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_1802EC60E.c)
 *     _std::function_void___cdecl(IApplicationView___IImmersiveMonitor__)_::function_void___cdecl(IApplicationView___IImmersiveMonitor__)__::_1_::dtor$0 @ 0x1802EC664 (_std--function_void___cdecl(IApplicationView___IImmersiveMonitor__)_--function_void___cdecl(IApp.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_Continue_::_1_::dtor$2 @ 0x1802EE01B (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cd_ea_1802EE01B.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$0 @ 0x1802EEB48 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perform_--_1_--dtor.c)
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$6 @ 0x1802EEB60 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perfor_ea_1802EEB60.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$0 @ 0x18039C293 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::HandleView_::_1_::dtor$0 @ 0x18039D170 (_UwpPrimaryAppProxy--HandleView_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViews_::_1_::dtor$0 @ 0x18039E1B4 (_UwpPrimaryAppProxy--RelayoutAppViews_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor$0 @ 0x18039E345 (_UwpPrimaryAppProxy--RelayoutAppViewsInternal_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RemoveView_::_1_::dtor$0 @ 0x18039E517 (_UwpPrimaryAppProxy--RemoveView_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$1 @ 0x180406942 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180406942.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$2 @ 0x18040694E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_18040694E.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$3 @ 0x18040695A (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_18040695A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
