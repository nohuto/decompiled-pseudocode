/*
 * XREFs of ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x1804339C8
 * Callers:
 *     ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180433810 (--$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180433A34 (-ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ.c)
 */

__int64 __fastcall HideWallpaperIconsObject::RuntimeClassInitialize(HideWallpaperIconsObject *this)
{
  HWND ShellWindow; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !HideWallpaperIconsObject::ShouldHideIcons(this) )
    return 0LL;
  ShellWindow = GetShellWindow();
  if ( PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 1LL) )
  {
    *((_BYTE *)this + 16) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"shell\\lib\\hidewallpapericons.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
