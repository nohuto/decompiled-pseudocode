/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800BFE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>(a2 + 48);
}
