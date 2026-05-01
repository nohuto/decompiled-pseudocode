/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AXUwindow_dc@wil@@@Z$1?close@23@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U23@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803E123C
 * Callers:
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$1 @ 0x1803E20E8 (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,void (*)(wil::window_dc),&public: static void wil::window_dc::close(wil::window_dc),wistd::integral_constant<unsigned __int64,0>,wil::window_dc,HDC__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,void (*)(wil::window_dc),&public: static void wil::window_dc::close(wil::window_dc),wistd::integral_constant<unsigned __int64,0>,wil::window_dc,HDC__ *,0,std::nullptr_t>>>(
        __m128i *a1)
{
  int result; // eax

  if ( a1->m128i_i64[0] )
    return ReleaseDC((HWND)_mm_srli_si128(*a1, 8).m128i_i64[0], (HDC)a1->m128i_i64[0]);
  return result;
}
