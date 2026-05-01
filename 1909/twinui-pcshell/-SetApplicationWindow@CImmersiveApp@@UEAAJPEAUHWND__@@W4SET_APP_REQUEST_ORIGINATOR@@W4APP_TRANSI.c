/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180168020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180011274 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180034970 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180037580 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18003CDD8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055C28 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055E44 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180055E44.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180164EB4 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180165B9C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180166388 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180168B20 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180169194 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x18016A83C (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18016AB58 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18016B368 (WPP_SF_Sd.c)
 *     WPP_SF_Sdq @ 0x18016B5B0 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  int v8; // r8d
  char v9; // bp
  int v10; // esi
  HWND ApplicationWindow; // r15
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int64 v13; // rcx
  _QWORD v15[40]; // [rsp+40h] [rbp-188h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"SetApplicationWindow");
  v15[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetApplicationWindow *)v15,
    *(const unsigned __int16 **)(a1 + 480));
  v9 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, v8, *(_QWORD *)(a1 + 480), *(_DWORD *)(a1 + 488), (char)a2);
  if ( *(_BYTE *)(a1 + 624) )
  {
    v10 = -2147019873;
    goto LABEL_31;
  }
  v10 = 0;
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
  if ( a2 != ApplicationWindow
    || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11,
        (unsigned int)&WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
        *(_QWORD *)(a1 + 480),
        *(_DWORD *)(a1 + 488));
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) )
    {
      if ( a2 == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184))
        || (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((const RECT *)(a1 + 184))
         || !ImmersiveApplicationLayout::AreAppViewDataEqual(
               (ImmersiveApplicationLayout *)(a1 + 216),
               (const struct APPLICATION_VIEW_DATA *)(a1 + 260),
               v12))
        && *(_DWORD *)(a1 + 200) <= *(_DWORD *)(a1 + 208)
        && *(_DWORD *)(a1 + 204) <= *(_DWORD *)(a1 + 212)
        && (*(_BYTE *)(a1 + 396) & 2) != 0 )
      {
        v9 = 0;
      }
      else if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) )
      {
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v13);
      }
    }
    if ( !a3 && a2 == ApplicationWindow && (*(_BYTE *)(a1 + 396) & 0x20) != 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::OnActivationRequested((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
      goto LABEL_28;
    }
    if ( !v9 )
      goto LABEL_31;
    if ( a3 == 2 )
    {
      v10 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 184, a2, a4);
      if ( v10 < 0 )
        goto LABEL_31;
LABEL_28:
      CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
      goto LABEL_31;
    }
    v10 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 112, a2, v12, 0LL);
    if ( v10 >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
  }
LABEL_31:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15, v10);
  v15[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  return (unsigned int)v10;
}
