/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x180433CAC
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD3A4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18031A460 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     IsUserAssignedAccessSingleApp @ 0x180433F4C (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x180433CD0 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1)
{
  int AssignedAccessTypeForUser_0; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+40h] [rbp+18h]

  AssignedAccessTypeForUser_0 = GetAssignedAccessTypeForUser_0(a1);
  v2 = 0;
  if ( AssignedAccessTypeForUser_0 >= 0 )
    return v4;
  return v2;
}
