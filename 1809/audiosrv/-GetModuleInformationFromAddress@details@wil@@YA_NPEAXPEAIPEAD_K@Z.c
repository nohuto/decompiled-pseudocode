/*
 * XREFs of ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800B0B48
 * Callers:
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800AF610 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall wil::details::GetModuleInformationFromAddress(wil::details *this, unsigned int *a2, char *a3, char *a4)
{
  bool result; // al

  *a3 = 0;
  if ( a2 )
    *a2 = 0;
  result = (char)wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
    return wil::details::g_pfnGetModuleInformation(this, a2, a3, 0x40uLL);
  return result;
}
