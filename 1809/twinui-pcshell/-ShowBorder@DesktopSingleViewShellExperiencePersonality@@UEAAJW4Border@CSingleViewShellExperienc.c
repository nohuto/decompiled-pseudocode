/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1800428A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // r15
  int v9; // ecx
  int v11; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-20h]
  unsigned __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  v7 = (char)a2;
  v8 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 24LL), a2);
  v9 = 1024;
  v14 = 0LL;
  v15 = 0LL;
  if ( a5 )
    v9 = 3584;
  v14 = __PAIR64__(v9, a3);
  LODWORD(v15) = a4;
  if ( (v7 & 1) != 0 )
  {
    v9 |= 0x20u;
    HIDWORD(v14) = v9;
  }
  if ( (v7 & 2) != 0 )
  {
    v9 |= 0x40u;
    HIDWORD(v14) = v9;
  }
  if ( (v7 & 4) != 0 )
  {
    v9 |= 0x80u;
    HIDWORD(v14) = v9;
  }
  if ( (v7 & 8) != 0 )
    HIDWORD(v14) = v9 | 0x100;
  v11 = 19;
  v12 = &v14;
  v13 = 16;
  SetWindowCompositionAttribute(v8, &v11);
  if ( a5 )
    DwmpUpdateAccentBlurRect(v8, a5);
  return 0LL;
}
