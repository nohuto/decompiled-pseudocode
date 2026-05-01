/*
 * XREFs of _PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x1800FBE64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
