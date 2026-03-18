/*
 * XREFs of NtGdiGetOPMInformation @ 0x1C00C6870
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00C4DB0 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00C4FD0 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C5C9C (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 */

__int64 __fastcall NtGdiGetOPMInformation(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  COPM *v9; // rcx
  int Information; // edi
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v11; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v12; // r9

  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, (__int64)a3);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Information = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(v7, a2);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(v9, a1, v11, v12);
      if ( Information >= 0 )
        Information = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, xmmword_1C01A7540);
    }
    UserSessionSwitchLeaveCrit((__int64)v9);
    if ( Information < 0 )
      return (unsigned int)Information;
    return v8;
  }
  return result;
}
