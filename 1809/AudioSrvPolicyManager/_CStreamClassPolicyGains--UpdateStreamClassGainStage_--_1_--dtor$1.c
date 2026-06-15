/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$1 @ 0x180039B9F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 200));
}
