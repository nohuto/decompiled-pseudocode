/*
 * XREFs of _Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor$1 @ 0x18003AC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>((__int64 (__fastcall ****)(_QWORD))(a2 + 56));
}
