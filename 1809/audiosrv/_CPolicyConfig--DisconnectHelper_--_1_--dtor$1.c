/*
 * XREFs of _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x1800D20CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::DisconnectHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(a2 + 96);
}
