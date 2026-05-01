/*
 * XREFs of ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1804143B4
 * Callers:
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x180414348 (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1804142DC (-IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ.c)
 */

char __fastcall HideWallpaperIconsObject::ShouldHideIcons(HideWallpaperIconsObject *this)
{
  HideWallpaperIconsObject *v1; // rcx
  char v2; // bl
  unsigned int v4[4]; // [rsp+20h] [rbp-148h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF
  char v6; // [rsp+14Ah] [rbp-1Eh]

  VersionInformation.dwOSVersionInfoSize = 284;
  v2 = 1;
  if ( GetVersionExW(&VersionInformation)
    && (unsigned __int8)(v6 - 2) <= 1u
    && (SHRegGetDWORD(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Server",
          L"ClientExperienceEnabled",
          v4) < 0
     || !v4[0])
    || HideWallpaperIconsObject::IsSolidColorBackground(v1) )
  {
    return 0;
  }
  return v2;
}
