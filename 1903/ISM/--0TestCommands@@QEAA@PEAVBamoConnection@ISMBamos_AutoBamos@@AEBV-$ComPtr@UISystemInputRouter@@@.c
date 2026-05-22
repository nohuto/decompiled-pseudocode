/*
 * XREFs of ??0TestCommands@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x1800240C4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TestCommands::TestCommands(_QWORD *a1, struct Microsoft::Bamo::BaseBamoConnection *a2, _QWORD *a3)
{
  *a1 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
  *a1 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  a1[7] = *a3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1 + 7);
  return a1;
}
