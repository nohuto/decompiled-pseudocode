/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017820
 * Callers:
 *     _InputSystemServerConnection::Create_::_1_::dtor$5 @ 0x18012E831 (_InputSystemServerConnection--Create_--_1_--dtor$5.c)
 *     __lambda_3bf0c1641773c9cead522fb3b6204044_::operator()_::_1_::dtor$1 @ 0x18012F973 (__lambda_3bf0c1641773c9cead522fb3b6204044_--operator()_--_1_--dtor$1.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x18012F9DE (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_MPCManagerConnection__::_1_::dtor$0 @ 0x18012FA42 (_Microsoft--Bamo--BaseBamoConnection--CreateServer_MPCManagerConnection__--_1_--dtor$0.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x180132DBD (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 *     _MPCManagerClient::Create_::_1_::dtor$2 @ 0x180134525 (_MPCManagerClient--Create_--_1_--dtor$2.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$3 @ 0x1801345AD (_MPCManagerClient--MPCManagerClient_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
    (**v2)(v2);
  }
}
