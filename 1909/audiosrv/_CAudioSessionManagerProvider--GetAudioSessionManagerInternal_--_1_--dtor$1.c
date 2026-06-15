/*
 * XREFs of _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::dtor$1 @ 0x1800721B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(a2 + 112);
}
