/*
 * XREFs of _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1802684A4
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef___ @ 0x1802653FC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18026F394 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb__&___ptr64_void_____ptr64_&___ptr64_ @ 0x1802F471C (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58b.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&___ptr64_ @ 0x180311610 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180311F50 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180371154 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1803711CC (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159f.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed__&___ptr64__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_IDCompBatchAnimationCallback_____ptr64_&___ptr64_ @ 0x18037127C (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e85534515.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_ @ 0x180371328 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-___ptr64_.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180371F50 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a2[1];
  return a1;
}
