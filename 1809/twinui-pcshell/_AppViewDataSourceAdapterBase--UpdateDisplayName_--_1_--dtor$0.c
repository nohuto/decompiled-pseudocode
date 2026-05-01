/*
 * XREFs of _AppViewDataSourceAdapterBase::UpdateDisplayName_::_1_::dtor$0 @ 0x1802AF6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateDisplayName_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
