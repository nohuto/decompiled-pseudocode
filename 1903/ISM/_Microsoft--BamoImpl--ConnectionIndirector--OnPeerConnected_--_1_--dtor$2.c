/*
 * XREFs of _Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor$2 @ 0x18003AC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
