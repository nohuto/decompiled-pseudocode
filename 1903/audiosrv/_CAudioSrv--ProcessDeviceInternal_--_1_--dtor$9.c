/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800C02C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 48));
}
