/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x1800B1A5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(a2 + 72);
}
