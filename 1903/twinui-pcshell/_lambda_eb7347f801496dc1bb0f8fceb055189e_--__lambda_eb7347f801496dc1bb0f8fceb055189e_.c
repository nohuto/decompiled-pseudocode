/*
 * XREFs of _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x18012D9F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::_scalar_deleting_destructor_ @ 0x18012E850 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18012E850.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x18012F260 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$4 @ 0x18012F476 (_CAppViewManager--ConsolidateView_--_1_--dtor$4.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_ @ 0x18036F5C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___--_scala.c)
 *     ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x18036F700 (-DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
