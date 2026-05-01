/*
 * XREFs of _AppViewDataSourceAdapterBase::UpdateAppId_::_1_::dtor$0 @ 0x1802AF5A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateAppId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
