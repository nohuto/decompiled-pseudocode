/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18011F930
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180015C08 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180043320 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180043B64 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800444FC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4A0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004E6A4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18004E6A4.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18011D174 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18011D83C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011DF20 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1801209CC (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180121E54 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18012216C (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     WPP_SF_Sd @ 0x180122988 (WPP_SF_Sd.c)
 *     WPP_SF_Sdq @ 0x180122BD0 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  int v7; // r8d
  char v8; // r14
  unsigned int v9; // ebp
  int v10; // edi
  HWND ApplicationWindow; // r12
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int64 v13; // rcx
  _QWORD v16[40]; // [rsp+40h] [rbp-188h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"SetApplicationWindow");
  v16[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetApplicationWindow *)v16,
    *(const unsigned __int16 **)(a1 + 448));
  v8 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, v7, *(_QWORD *)(a1 + 448), *(_DWORD *)(a1 + 456), (char)a2);
  v9 = *(_BYTE *)(a1 + 592) != 0 ? 0x8007139F : 0;
  v10 = v9;
  if ( !*(_BYTE *)(a1 + 592) )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
    if ( a2 != ApplicationWindow
      || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11,
          (unsigned int)&WPP_3d345533ad1632fc07820b100fc427c3_Traceguids,
          *(_QWORD *)(a1 + 448),
          *(_DWORD *)(a1 + 456));
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
      {
        if ( a2 == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152))
          || (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((const RECT *)(a1 + 152))
           || !ImmersiveApplicationLayout::AreAppViewDataEqual(
                 (ImmersiveApplicationLayout *)(a1 + 184),
                 (const struct APPLICATION_VIEW_DATA *)(a1 + 228),
                 v12))
          && *(_DWORD *)(a1 + 168) <= *(_DWORD *)(a1 + 176)
          && *(_DWORD *)(a1 + 172) <= *(_DWORD *)(a1 + 180)
          && (*(_BYTE *)(a1 + 364) & 2) != 0 )
        {
          v8 = 0;
        }
        else if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
        {
          CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v13);
        }
      }
      if ( !a3 && a2 == ApplicationWindow && (*(_BYTE *)(a1 + 364) & 0x20) != 0 )
      {
        CImmersiveApp::CImmersiveWindowCollection::OnActivationRequested((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
        CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
        v10 = v9;
      }
      else
      {
        v10 = v9;
        if ( v8 )
        {
          if ( a3 == 2 )
          {
            v10 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 152, a2, a4);
            if ( v10 >= 0 )
              CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
          }
          else
          {
            v10 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 112, a2, v12, 0LL);
            if ( v10 >= 0 )
              CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
          }
        }
      }
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, v10);
  v16[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
  return (unsigned int)v10;
}
