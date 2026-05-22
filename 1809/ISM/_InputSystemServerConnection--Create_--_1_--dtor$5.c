/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$5 @ 0x18012E831
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputSystemServerConnection::Create_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
