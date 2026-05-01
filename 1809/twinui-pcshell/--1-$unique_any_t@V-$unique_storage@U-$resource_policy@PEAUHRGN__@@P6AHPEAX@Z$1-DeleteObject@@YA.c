/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180186F28
 * Callers:
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1800AB3B2 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects_::_1_::dtor$0 @ 0x180188490 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegionWithCustomRects_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x18018A744 (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x1802EB1BC (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x1802EB378 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_6dcf47c7a64d744d561044cc52c68c53_@@@@UEAAPEAXI@Z @ 0x1802EB490 (--_E-$CAsyncCallbackWithLambda@V_lambda_6dcf47c7a64d744d561044cc52c68c53_@@@@UEAAPEAXI@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327FD4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x180374AE0 (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$3 @ 0x18037C298 (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
