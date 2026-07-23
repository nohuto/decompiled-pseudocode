/*
 * XREFs of RtlGetNtSystemRoot @ 0x180029260
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     LdrpBuildSystem32FileName @ 0x180025714 (LdrpBuildSystem32FileName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x18005AB90 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     IsOverlaySupportedPath @ 0x18005BCFC (IsOverlaySupportedPath.c)
 *     LdrpGetModuleName @ 0x1800622B8 (LdrpGetModuleName.c)
 *     RtlpDiskSpeedInitialize @ 0x18008C5C0 (RtlpDiskSpeedInitialize.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CBD98 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
