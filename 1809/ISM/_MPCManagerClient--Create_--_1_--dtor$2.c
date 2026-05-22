/*
 * XREFs of _MPCManagerClient::Create_::_1_::dtor$2 @ 0x180134525
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManagerClient::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((__int64 *)(a2 + 160));
}
