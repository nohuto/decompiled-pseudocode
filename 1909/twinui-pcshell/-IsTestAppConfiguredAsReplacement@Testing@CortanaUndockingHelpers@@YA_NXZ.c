/*
 * XREFs of ?IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ @ 0x1801DC80C
 * Callers:
 *     ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801DBF88 (-GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ.c)
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E4E8C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ @ 0x1801E5BF0 (-GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ.c)
 *     ?TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801EAA2C (-TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

bool __fastcall CortanaUndockingHelpers::Testing::IsTestAppConfiguredAsReplacement(
        CortanaUndockingHelpers::Testing *this)
{
  bool v1; // bl
  unsigned int ValueW; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 4;
  v1 = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"IsTestAppConfiguredAsReplacement",
             0x10u,
             0LL,
             &v6,
             &v7);
  if ( ValueW != 2 )
  {
    if ( ValueW )
    {
      v3 = wil::details::in1diag3::Return_Win32(
             retaddr,
             41LL,
             (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
             (const char *)ValueW);
    }
    else
    {
      v1 = v6 == 1;
      v3 = 0;
    }
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
        (const char *)(unsigned int)v3);
  }
  return v1;
}
