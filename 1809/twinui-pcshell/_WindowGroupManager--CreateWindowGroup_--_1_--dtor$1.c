/*
 * XREFs of _WindowGroupManager::CreateWindowGroup_::_1_::dtor$1 @ 0x180204C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowGroupManager::CreateWindowGroup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
