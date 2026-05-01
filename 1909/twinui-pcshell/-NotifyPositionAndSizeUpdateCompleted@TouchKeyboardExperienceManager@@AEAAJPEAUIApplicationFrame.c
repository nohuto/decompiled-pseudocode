/*
 * XREFs of ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803307B4
 * Callers:
 *     _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C (_lambda_39b1066faff2db62f569cb34f066b88c_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18032DE94 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18032E034 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18032E1E4 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180340C84 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper; // eax
  unsigned int LastError; // ebx
  int ViewInfo; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  std::_Ref_count_base *v9; // rsi
  struct IUnknown *v11; // [rsp+20h] [rbp-60h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-58h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  struct tagRECT v15; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v14 = -2LL;
  v11 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this, (__int64)a2, (__int64 *)&v11);
  LastError = FrameWrapper;
  if ( FrameWrapper < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x748,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWrapper);
    goto LABEL_17;
  }
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, v11, v13);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 1866LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_15;
  }
  ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 40LL))(a2, &hWnd);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 1868LL;
    goto LABEL_13;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x74E,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v8);
    goto LABEL_15;
  }
  v9 = v13[0];
  ViewInfo = KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
               *((KeyboardHosting::TabTipAdapter **)this + 91),
               *((_DWORD *)v13[0] + 9),
               &Rect);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 1871LL;
    goto LABEL_13;
  }
  v15 = Rect;
  ViewInfo = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
               (KeyboardHosting::TabTipAdapter **)this,
               *((_DWORD *)v9 + 9),
               &v15);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 1872LL;
    goto LABEL_13;
  }
  LastError = 0;
LABEL_15:
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return LastError;
}
