/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803E1274
 * Callers:
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$4 @ 0x1803E210C (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$4.c)
 *     __lambda_c95b2e5eab2cd436d4d0117f4debe67d_::operator()_::_1_::dtor$1 @ 0x1803F3F97 (__lambda_c95b2e5eab2cd436d4d0117f4debe67d_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>(
        __m128i *a1)
{
  HGDIOBJ result; // rax

  if ( a1->m128i_i64[0] )
    return SelectObject((HDC)_mm_srli_si128(*a1, 8).m128i_i64[0], (HGDIOBJ)a1->m128i_i64[0]);
  return result;
}
