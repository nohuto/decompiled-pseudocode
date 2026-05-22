/*
 * XREFs of ??1?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x18012774C
 * Callers:
 *     _PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor$2 @ 0x180129304 (_PenDeviceManager--RepopulateActiveBamoForId_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>::~pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>(
        __int64 a1)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
