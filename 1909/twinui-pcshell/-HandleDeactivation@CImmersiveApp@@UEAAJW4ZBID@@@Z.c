/*
 * XREFs of ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1801648A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003CBAC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18003CDD8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058150 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleDeactivation(__int64 a1)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 588));
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) )
    CImmersiveApp::_SetApplicationForegroundPriority(a1 - 112, 1u);
  *(_DWORD *)(a1 + 472) &= ~2u;
  v4 = 0LL;
  v3 = 3;
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)&v3,
    1uLL);
  return 0LL;
}
