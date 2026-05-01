/*
 * XREFs of _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$0 @ 0x180274F75
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 96);
}
