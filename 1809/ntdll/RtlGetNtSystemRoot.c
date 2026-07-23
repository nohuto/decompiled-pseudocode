/*
 * XREFs of RtlGetNtSystemRoot @ 0x180026CC0
 * Callers:
 *     LdrpBuildSystem32FileName @ 0x18002649C (LdrpBuildSystem32FileName.c)
 *     IsOverlaySupportedPath @ 0x180032CD8 (IsOverlaySupportedPath.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 *     LdrpGetModuleName @ 0x18006A6E8 (LdrpGetModuleName.c)
 *     RtlpDiskSpeedInitialize @ 0x18008E830 (RtlpDiskSpeedInitialize.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
