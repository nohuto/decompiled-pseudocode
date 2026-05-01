/*
 * XREFs of ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180407C44
 * Callers:
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x180292FB0 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802A3964 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x180407A60 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180407D8C (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800184A0 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18008BA3C (IsWPDeveloperAppAllowedPresent.c)
 *     ?GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z @ 0x1804222A0 (-GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
        CallerIdentity::ApiPolicyChecker *this,
        unsigned __int16 *a2,
        int *a3)
{
  int PackageActivationSettings; // ebx
  LONG PackagesByPackageFamily; // eax
  int v7; // eax
  UINT32 count; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 bufferLength; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PWSTR packageFullNames; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR packageFamilyName; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  WCHAR buffer[128]; // [rsp+60h] [rbp-A0h] BYREF

  *(_DWORD *)a2 = 0;
  packageFamilyName = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFamilyName);
  v15 = -1LL;
  v16 = -1LL;
  PackageActivationSettings = ParseAppUserModelId((const unsigned __int16 *)this, (LPVOID *)&packageFamilyName, 0LL);
  if ( PackageActivationSettings >= 0 )
  {
    count = 1;
    bufferLength = 128;
    PackagesByPackageFamily = GetPackagesByPackageFamily(
                                packageFamilyName,
                                &count,
                                &packageFullNames,
                                &bufferLength,
                                buffer);
    PackageActivationSettings = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      PackageActivationSettings = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( PackageActivationSettings >= 0 && count == 1 )
    {
      if ( IsWPDeveloperAppAllowedPresent() )
        v7 = WPDeveloperAppAllowed(packageFullNames, &v10);
      else
        v7 = IsDeveloperModeEnabled(&v10);
      PackageActivationSettings = v7;
      if ( v7 >= 0 )
      {
        if ( v10 )
        {
          PackageActivationSettings = GetPackageActivationSettings(
                                        packageFullNames,
                                        (enum PACKAGEACTIVATIONSETTINGS *)v12);
          if ( PackageActivationSettings >= 0 && (v12[0] & 2) != 0 )
            *(_DWORD *)a2 = 1;
        }
      }
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFamilyName);
  return (unsigned int)PackageActivationSettings;
}
