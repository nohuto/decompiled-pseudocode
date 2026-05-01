/*
 * XREFs of _PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile_::_1_::dtor$2 @ 0x18019E1BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 64);
}
