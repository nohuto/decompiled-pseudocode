/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005A79C
 * Callers:
 *     __lambda_3bf0c1641773c9cead522fb3b6204044_::operator()_::_1_::dtor$1 @ 0x18003D204 (__lambda_3bf0c1641773c9cead522fb3b6204044_--operator()_--_1_--dtor$1.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x18003D612 (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_MPCManagerConnection__::_1_::dtor$0 @ 0x18003D6BA (_Microsoft--Bamo--BaseBamoConnection--CreateServer_MPCManagerConnection__--_1_--dtor$0.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_AnimationDataProviderConnection__::_1_::dtor$0 @ 0x18003D6CC (_Microsoft--Bamo--BaseBamoConnection--CreateClient_AnimationDataProviderConnection__--_1_--dtor$.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x18010EEDC (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return result;
}
