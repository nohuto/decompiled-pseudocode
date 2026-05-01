/*
 * XREFs of HamOptInIsPsmKeyEnabledEx @ 0x18003931C
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18000D62C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x18003C43C (-HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE2@Z @ 0x180068544 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE2@Z.c)
 * Callees:
 *     HamOptInIsPackageFamilyNameEnabledEx @ 0x1800393C0 (HamOptInIsPackageFamilyNameEnabledEx.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

ULONG __fastcall HamOptInIsPsmKeyEnabledEx(__int64 a1)
{
  NTSTATUS PackageFullNameFromKey; // eax
  ULONG result; // eax
  UINT32 packageFamilyNameLength[4]; // [rsp+20h] [rbp-1B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+30h] [rbp-1A8h] BYREF
  WCHAR packageFullName[128]; // [rsp+C0h] [rbp-118h] BYREF

  packageFamilyNameLength[0] = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a1, packageFullName, packageFamilyNameLength);
  if ( PackageFullNameFromKey < 0 )
  {
    result = RtlNtStatusToDosError(PackageFullNameFromKey);
  }
  else
  {
    packageFamilyNameLength[0] = 65;
    memset_0(packageFamilyName, 0, 0x82uLL);
    result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
  }
  if ( !result )
    return HamOptInIsPackageFamilyNameEnabledEx(packageFamilyName);
  return result;
}
