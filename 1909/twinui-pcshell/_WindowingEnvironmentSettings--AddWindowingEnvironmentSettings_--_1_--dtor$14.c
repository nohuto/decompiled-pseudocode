/*
 * XREFs of _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$14 @ 0x18029A5BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
