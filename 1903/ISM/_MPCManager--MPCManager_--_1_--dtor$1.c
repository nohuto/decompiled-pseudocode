/*
 * XREFs of _MPCManager::MPCManager_::_1_::dtor$1 @ 0x18003D612
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManager::MPCManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(*(_QWORD *)(a2 + 80) + 64LL);
}
