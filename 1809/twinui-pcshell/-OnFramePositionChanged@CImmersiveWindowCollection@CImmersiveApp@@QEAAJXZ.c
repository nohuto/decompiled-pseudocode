/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18004AC58
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18004A79C (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002B1F4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002BF20 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002C1C0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18011AFB0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180120538 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  int v3; // edi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v7[3]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 224LL))(*((_QWORD *)this + 19));
  if ( v2 != *((_BYTE *)this + 201) )
  {
    *((_BYTE *)this + 201) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 0LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 0LL);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 20));
  }
  v3 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         this,
         (struct APPLICATION_VIEW_DATA_UPDATE *)v7);
  if ( v3 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 19) + 248LL))(*((_QWORD *)this + 19), &v6) >= 0
      && (_BYTE)v6 != *((_BYTE *)this + 203) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 240LL))(
             *((_QWORD *)this + 19),
             (unsigned int)-((_BYTE)v6 == 0));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E11,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v5,
          v6);
      *((_BYTE *)this + 203) = v6;
    }
    CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
      (__int64)this,
      v7,
      ((*((_DWORD *)this + 53) & 2) != 0) + 1);
  }
  return (unsigned int)v3;
}
