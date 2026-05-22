/*
 * XREFs of _MPCManager::MPCManager_::_1_::dtor$1 @ 0x18012F9DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManager::MPCManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 64LL));
}
