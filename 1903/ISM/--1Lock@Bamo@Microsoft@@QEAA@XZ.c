/*
 * XREFs of ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801277B0
 * Callers:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180128D5C (-RemoveAt@-$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Ba.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::dtor$0 @ 0x180128E67 (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--BamoList_PenDevi.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     _PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor$57 @ 0x18012931C (_PenDeviceManager--RepopulateActiveBamoForId_--_1_--dtor$57.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002ACD0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::Bamo::Lock::~Lock(Microsoft::Bamo::Lock *this, __int64 a2, __int64 a3, const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)this + 24LL);
  --*((_DWORD *)v5 + 35);
  if ( !*((_BYTE *)this + 8) )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v5);
  if ( *(_QWORD *)this )
    Microsoft::BamoImpl::BamoImplObject::Release(*(Microsoft::BamoImpl::BamoImplObject **)this, a2, a3, a4);
}
