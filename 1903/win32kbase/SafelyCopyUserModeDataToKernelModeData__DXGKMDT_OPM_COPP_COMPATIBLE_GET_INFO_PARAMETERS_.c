/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C0126140
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C01267C0 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C0126A80 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
        void *a1,
        char *a2)
{
  if ( (unsigned __int64)(a2 + 4096) > MmUserProbeAddress || a2 + 4096 < a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(a1, a2, 0x1000uLL);
  return 0LL;
}
