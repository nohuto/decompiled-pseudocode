/*
 * XREFs of _CStreamInstance::DisconnectFromRightSubmix_::_1_::dtor$0 @ 0x14003E0F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
