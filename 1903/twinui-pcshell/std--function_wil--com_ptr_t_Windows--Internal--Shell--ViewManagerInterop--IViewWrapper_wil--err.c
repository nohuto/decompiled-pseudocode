/*
 * XREFs of std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)_::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)___lambda_0a3b6d6f5c204974f97bccd3169266e9__void_ @ 0x180099E04
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BF40 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     std::_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int___lambda_0a3b6d6f5c204974f97bccd3169266e9__void_ @ 0x180099DD0 (std--_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil--com_ptr_t_Windows--Inter.c)
 */

_QWORD *__fastcall std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_unsigned_int__::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_unsigned_int____lambda_0a3b6d6f5c204974f97bccd3169266e9__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdx

  a1[7] = 0LL;
  v3 = std::_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int___lambda_0a3b6d6f5c204974f97bccd3169266e9__void_(
         a1,
         a2);
  *(_QWORD *)(v4 + 56) = v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5);
  return a1;
}
