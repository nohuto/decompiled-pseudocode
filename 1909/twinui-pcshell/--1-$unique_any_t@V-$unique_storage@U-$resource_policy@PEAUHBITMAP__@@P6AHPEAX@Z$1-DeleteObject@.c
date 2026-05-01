/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801DA4B4
 * Callers:
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1800E78E3 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$1 @ 0x1801DE1C0 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects_::_1_::dtor$0 @ 0x1801EE37F (_CortanaDesktopExperienceView--ApplyCortanaWindowRegionWithCustomRects_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801F05A8 (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x18036B46C (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x18036B628 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___::_scalar_deleting_destructor_ @ 0x18036B740 (CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___--_scalar_deleting_destructo.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803A7ED8 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1803F9EF8 (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$3 @ 0x180401718 (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
