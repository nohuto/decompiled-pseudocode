/*
 * XREFs of ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180053430
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18011CC10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011D010 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800444FC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18007B0B8 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 */

void __fastcall CImmersiveApp::_ClearForegroundBoostHintedProcess(HANDLE *this)
{
  char *v2; // rcx
  HWND ApplicationWindow; // rax
  DWORD ProcessId; // eax
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 776) )
  {
    if ( *((_BYTE *)this + 792) )
    {
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(this + 33));
      if ( !ApplicationWindow
        || !GetWindowThreadProcessId(ApplicationWindow, &dwProcessId)
        || (ProcessId = GetProcessId(this[98]), dwProcessId != ProcessId) )
      {
        CImmersiveApp::_SetProcessForegroundPriority(this, 1LL, this[98], 0LL, 0LL);
        *((_DWORD *)this + 195) = 1;
      }
    }
    v2 = (char *)this[98];
    this[98] = 0LL;
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    *((_BYTE *)this + 792) = 0;
  }
}
