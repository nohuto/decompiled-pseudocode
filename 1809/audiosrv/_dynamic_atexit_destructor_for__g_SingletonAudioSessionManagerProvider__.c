/*
 * XREFs of _dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__ @ 0x1800705A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__()
{
  wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>((__int64)&g_SingletonAudioSessionManagerProvider);
}
