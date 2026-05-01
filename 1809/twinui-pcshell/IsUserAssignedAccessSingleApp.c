/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x1803B2710
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801897E0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180189C40 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BCDC8 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BD7B0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     IsCurrentUserAssignedAccess @ 0x1803B26FC (IsCurrentUserAssignedAccess.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1803AC400 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GetAssignedAccessTypeForUser @ 0x1803B24E0 (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x1803B25E0 (GetSidStringFromToken.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  unsigned int v1; // ebx
  LPWSTR v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  memset(v3, 0, 24);
  if ( (int)GetSidStringFromToken(a1, v3) >= 0 )
    LOBYTE(v1) = (unsigned int)GetAssignedAccessTypeForUser(v3[0]) == 1;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)v3);
  return v1;
}
