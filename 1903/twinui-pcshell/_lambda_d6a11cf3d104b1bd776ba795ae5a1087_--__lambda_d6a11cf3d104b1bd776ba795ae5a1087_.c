/*
 * XREFs of _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18009A748
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18000BDE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ebbac0bc3a84ff014f406f40fcbc7a60___1_long_::_scalar_deleting_destructor_ @ 0x18009AC40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18009AC40.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027B620 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BB80 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     __lambda_152963d5211cf6149a80abe334e76dfa_::operator()_::_1_::dtor$3 @ 0x1802ECC47 (__lambda_152963d5211cf6149a80abe334e76dfa_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 1);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1);
}
