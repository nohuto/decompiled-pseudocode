/*
 * XREFs of ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18031FCD4
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1803212B0 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x180329100 (-TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180114568 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C928 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18030FD9C (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315674 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEA_N3$$QEA_N@Z @ 0x18031C014 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellReque.c)
 *     ??1DeferredRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031DE5C (--1DeferredRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031DFD8 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031E004 (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803246C0 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803247B8 (-RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPositionA.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x180325150 (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 *     ?StartActivity@DeferredRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x180325318 (-StartActivity@DeferredRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyb.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180325BC0 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803261B0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgR.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18032BCE0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(__int64 a1, int a2)
{
  unsigned int *v4; // r15
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v18[40]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v19[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v17[1] = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"DeferredRequestExecuted");
  v19[0] = &TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted::`vftable';
  v4 = (unsigned int *)(a1 + 336);
  LOBYTE(v5) = *(_BYTE *)(a1 + 329);
  LOBYTE(v6) = *(_BYTE *)(a1 + 328);
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted::StartActivity(
    v19,
    v6,
    *(unsigned int *)(a1 + 336),
    v5,
    a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88));
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_24;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 352));
  v17[2] = a1 + 352;
  if ( *(_BYTE *)(a1 + 328) )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v9 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
           *(_QWORD *)(a1 + 96) + 16LL,
           *(unsigned int *)(a1 + 332),
           &v16,
           &v15);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x376,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
LABEL_17:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      goto LABEL_22;
    }
    if ( (_DWORD)v15 == 1 )
    {
      if ( *(_BYTE *)(a1 + 329) )
      {
        v10 = 9LL;
        if ( a2 )
        {
          if ( a2 == 1 )
            v10 = 8LL;
        }
        else
        {
          v10 = 7LL;
        }
        LOBYTE(v14) = 1;
        v17[0] = KeyboardHosting::ShellRequestedStateChangeReasonToString(v10);
        LODWORD(v15) = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 56));
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const *,bool &,bool &,bool>(
          (struct wil::details::IFailureCallback *)v18,
          (unsigned int *)(a1 + 336),
          (unsigned int *)&v15,
          v17,
          (char *)(a1 + 312),
          (char *)(a1 + 316),
          (char *)&v14);
        v15 = v16;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
        v11 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
                a1,
                (unsigned int)&v15,
                1,
                *v4,
                *(_DWORD *)(a1 + 332));
        v8 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x394,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v11);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v18);
          goto LABEL_17;
        }
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v18);
      }
      else
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v18,
          (__int64)"OnShellRequestedShowActivity");
        v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v18);
        v15 = v16;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
        v12 = KeyboardHosting::TabTipAdapter::RequestShow(a1, &v15, *v4, *(unsigned int *)(a1 + 332));
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x39A,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v12);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v18);
          goto LABEL_17;
        }
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v18,
          0);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v18);
      }
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        928LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  *(_WORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = 9;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
  v8 = 0;
LABEL_22:
  if ( a1 != -352 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 352));
LABEL_24:
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted::~DeferredRequestExecuted((TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted *)v19);
  return v8;
}
