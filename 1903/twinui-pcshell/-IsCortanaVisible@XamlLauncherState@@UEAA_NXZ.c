/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800767D0
 * Callers:
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180076760 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180076790 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802FC450 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 945) || *((_BYTE *)this + 946) )
    return 0;
  v2 = *((_DWORD *)this + 10);
  if ( v2 >= 4 && (v2 <= 5 || v2 > 6 && (v2 <= 10 || v2 > 11 && (v2 <= 14 || v2 == 21))) )
    return 1;
  return v1;
}
