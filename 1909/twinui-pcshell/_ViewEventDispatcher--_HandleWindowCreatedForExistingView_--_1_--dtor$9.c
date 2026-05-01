/*
 * XREFs of _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$9 @ 0x1802940D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 64);
}
