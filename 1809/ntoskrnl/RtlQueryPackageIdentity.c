/*
 * XREFs of RtlQueryPackageIdentity @ 0x1400A4F70
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x1406688C0 (PfSnCheckModernApp.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066DF0C (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406A078C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x14088A5C0 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1400A54D0 (RtlQueryPackageClaims.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  _PS_PKG_CLAIM v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  result = RtlQueryPackageClaims(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, &v7, 0LL);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = LOWORD(v7.Flags) != 0LL;
  }
  return result;
}
