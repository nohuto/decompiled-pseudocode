/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C6490
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00C4DB0 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C00C4EC4 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C5820 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(void *a1, _OWORD *a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  COPM *v9; // rcx
  int COPPCompatibleInformation; // edi
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v11; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v12; // r9

  result = AcquireCriticalSectionAndCheckState((__int64)a1, (__int64)a2, (__int64)a3);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    COPPCompatibleInformation = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
                                  v7,
                                  a2);
    if ( COPPCompatibleInformation >= 0 )
    {
      COPPCompatibleInformation = COPM::GetCOPPCompatibleInformation(v9, a1, v11, v12);
      if ( COPPCompatibleInformation >= 0 )
        COPPCompatibleInformation = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(
                                      a3,
                                      xmmword_1C01A9540);
    }
    UserSessionSwitchLeaveCrit((__int64)v9);
    if ( COPPCompatibleInformation < 0 )
      return (unsigned int)COPPCompatibleInformation;
    return v8;
  }
  return result;
}
