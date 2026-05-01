/*
 * XREFs of ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18004AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleInitialViewCreation(
        CImmersiveApp *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  CImmersiveApp *v3; // rdi
  int v4; // ebx
  struct ITaskWindow *v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  char v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CImmersiveApp *)((char *)this - 112);
  v6 = a3;
  LOBYTE(a3) = 1;
  v4 = CImmersiveApp::_ProcessNewView((char *)this - 112, a2, a3, 0LL, v6, &v9);
  if ( v4 >= 0 && v9 )
  {
    v8 = 0LL;
    v7 = 11;
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)&v7, 1uLL);
  }
  return (unsigned int)v4;
}
