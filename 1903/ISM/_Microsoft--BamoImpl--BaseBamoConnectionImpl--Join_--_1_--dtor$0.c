/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$0 @ 0x18003D6DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(a2 + 136);
}
