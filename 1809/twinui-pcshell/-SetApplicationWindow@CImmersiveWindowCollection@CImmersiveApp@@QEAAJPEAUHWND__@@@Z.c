/*
 * XREFs of ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18011FB98
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180042E70 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18011D218 (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180121E54 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180042FA4 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121914 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180121E08 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 *     WPP_SF_Sdqd @ 0x180122C64 (WPP_SF_Sdqd.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  char v2; // si
  int v4; // r8d
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = (char)a2;
  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v9);
  v5 = v9;
  v6 = 0;
  if ( v9 )
  {
    v7 = CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(this, v9);
    v6 = v7;
    if ( *((_QWORD *)this + 17) )
    {
      if ( v7 >= 0 )
        CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdqd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v5,
      v4,
      *(_QWORD *)(*((_QWORD *)this + 20) + 560LL),
      *(_DWORD *)(*((_QWORD *)this + 20) + 568LL),
      v2,
      v6);
  return v6;
}
