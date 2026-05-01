/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180010628
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180010318 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180010594 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010820 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 */

__int64 __fastcall GetSearchboxTaskbarMode(TabletModeHelpers *a1)
{
  __int64 v1; // r8
  unsigned int v4; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( TabletModeHelpers::IsTabletMode(a1) )
  {
    return 1;
  }
  else
  {
    LOBYTE(v5) = 0;
    CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&v5, v1);
    v6 = ((_BYTE)v5 != 0) + 1;
    if ( (unsigned int)SHRegGetDWORD(
                         HKEY_CURRENT_USER,
                         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                         L"SearchboxTaskbarMode",
                         &v6) == -2147024894
      && (v5 = 0,
          (int)SHRegGetDWORD(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                 L"SearchboxTaskbarModeForceGlyph",
                 &v5) >= 0) )
    {
      v4 = v6;
      if ( v5 )
        return 1;
      return v4;
    }
    else
    {
      return v6;
    }
  }
}
