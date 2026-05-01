/*
 * XREFs of ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180189174
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180189970 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180364790 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CImmersiveColor::IsColorSchemeChangeMessage(int a1, const WCHAR *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a1 == 26 && a2 && CompareStringOrdinal(a2, -1, L"ImmersiveColorSet", -1, 1) == 2 )
  {
    RefreshImmersiveColorPolicyState();
    v2 = 1;
  }
  GetIsImmersiveColorUsingHighContrast(1LL);
  return v2;
}
