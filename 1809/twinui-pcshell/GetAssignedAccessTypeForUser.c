/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x1803B24E0
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802A2C70 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     IsUserAssignedAccessSingleApp @ 0x1803B2710 (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x1803B2504 (GetAssignedAccessTypeForUser_0.c)
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
