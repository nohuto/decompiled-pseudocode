/*
 * XREFs of _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x18006BFE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>(a2 + 48);
}
