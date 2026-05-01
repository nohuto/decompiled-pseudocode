/*
 * XREFs of ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1800499E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040170 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041070 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180049370 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x180049C1C (CApplicationFrameService--_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180067214 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterface.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EA540 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800EB088 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180113ACC (--0-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180113DE4 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114AFC (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x180115FE4 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x180116134 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180116288 (-Stop@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1801176B0 (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180117D1C (-reset@-$shared_object@V-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::OnCommand(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3,
        unsigned int a4)
{
  char *v7; // r13
  int FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f; // r14d
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  BOOL v36; // edi
  int v37; // eax
  RTL_SRWLOCK *v38; // rbx
  int v39; // [rsp+28h] [rbp-E0h]
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v44; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v45[24]; // [rsp+70h] [rbp-98h] BYREF
  int v46; // [rsp+88h] [rbp-80h]
  _BYTE v47[248]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v48[16]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v49[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v43[1] = -2LL;
  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v7 = (char *)this - 48;
  v40 = 0LL;
  FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = (*(__int64 (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
                                                            a2,
                                                            v43);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f < 0 )
    goto LABEL_12;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
                                                            v7,
                                                            v43[0],
                                                            &v41);
  v10 = v41;
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f >= 0 )
  {
    FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>>(
                                                              v41,
                                                              &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                                                              &v42);
    v9 = v42;
  }
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release(v10);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f >= 0 )
    FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)v7 + 21) + 48LL))(
                                                              *((_QWORD *)v7 + 21),
                                                              v9,
                                                              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                                              &v40);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DF,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f,
      v39);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    return (unsigned int)FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f;
  }
  v12 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v12 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( !v12 )
  {
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v44);
    v44 = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
    AppCloseTelemetry::ShellAppManagerCloseRequested::StartActivity(
      (AppCloseTelemetry::ShellAppManagerCloseRequested *)&v44,
      a4);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v49);
    v49[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
    CAppManagerTelemetry::TitleBarButtonCloseRequested::StartActivity((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v49);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 17) + 112LL))(
            *((_QWORD *)this + 17),
            v40,
            1LL,
            a4);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E5,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v16,
        v39);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v49);
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v44);
    v49[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v49);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v49);
    v44 = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v44);
    wil::details::shared_object<wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v48);
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>(v47);
    if ( v46 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v45);
    goto LABEL_26;
  }
  v13 = *(_QWORD *)&a3->Data1 - ApplicationFrameMinimizeCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMinimizeCommand )
    v13 = *(_QWORD *)a3->Data4 - 0x68800BB0DB37499ALL;
  if ( v13 )
  {
    v14 = *(_QWORD *)&a3->Data1 - ApplicationFrameRestoreCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameRestoreCommand )
      v14 = *(_QWORD *)a3->Data4 - 0x43C1CD8F609CB0B9LL;
    if ( !v14 )
      goto LABEL_26;
    v15 = *(_QWORD *)&a3->Data1 - ApplicationFrameMaximizeCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMaximizeCommand )
      v15 = *(_QWORD *)a3->Data4 + 0x450BA64784828053LL;
    if ( !v15 )
      goto LABEL_26;
    v20 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v20 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( !v20 )
      goto LABEL_106;
    v21 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
      v21 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
    if ( !v21 )
    {
LABEL_106:
      v35 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
        v35 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
      v36 = v35 == 0;
      v41 = 0LL;
      v37 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v40, &v41);
      FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3FD,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v37,
          v39);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
        goto LABEL_13;
      }
      v38 = CApplicationManagerUtility::g_pIAMGlobals;
      v43[0] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, BOOL))(*(_QWORD *)v41 + 608LL))(v41, v36);
      if ( v38 )
        ReleaseSRWLockExclusive(v38);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
      goto LABEL_26;
    }
    v22 = *(_QWORD *)&a3->Data1 - ApplicationFrameActionsCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameActionsCommand )
      v22 = *(_QWORD *)a3->Data4 + 0x52D8B31D06D36159LL;
    if ( v22 )
    {
      v23 = *(_QWORD *)&a3->Data1 - ApplicationFrameAppBarCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAppBarCommand )
        v23 = *(_QWORD *)a3->Data4 + 0x2B42122496FC8555LL;
      if ( v23 )
      {
        v24 = *(_QWORD *)&a3->Data1 - ApplicationFrameSearchCommand;
        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSearchCommand )
          v24 = *(_QWORD *)a3->Data4 + 0x33C5D77546DCE77FLL;
        if ( v24 )
        {
          v25 = *(_QWORD *)&a3->Data1 - ApplicationFrameShareCommand;
          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameShareCommand )
            v25 = *(_QWORD *)a3->Data4 - 0x53BF8027BA4C1EABLL;
          if ( v25 )
          {
            v26 = *(_QWORD *)&a3->Data1 - ApplicationFramePrintCommand;
            if ( *(_QWORD *)&a3->Data1 == ApplicationFramePrintCommand )
              v26 = *(_QWORD *)a3->Data4 + 0x1B7A650E95AA5A72LL;
            if ( v26 )
            {
              v27 = *(_QWORD *)&a3->Data1 - ApplicationFrameTapAndSendCommand;
              if ( *(_QWORD *)&a3->Data1 == ApplicationFrameTapAndSendCommand )
                v27 = *(_QWORD *)a3->Data4 + 0x11779251ABA4E365LL;
              if ( v27 )
              {
                v28 = *(_QWORD *)&a3->Data1 - ApplicationFrameSettingsCommand;
                if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSettingsCommand )
                  v28 = *(_QWORD *)a3->Data4 - 0xE24967B55ED51BCLL;
                if ( v28 )
                {
                  v29 = *(_QWORD *)&a3->Data1 - ApplicationFrameFullScreenCommand;
                  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameFullScreenCommand )
                    v29 = *(_QWORD *)a3->Data4 - 0x30269B0F10A7889FLL;
                  if ( v29 )
                  {
                    v30 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitFullScreenCommand;
                    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitFullScreenCommand )
                      v30 = *(_QWORD *)a3->Data4 + 0x4D1FB59A484F3849LL;
                    if ( v30 )
                    {
                      v31 = *(_QWORD *)&a3->Data1 - ApplicationFrameAnnotateCommand;
                      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAnnotateCommand )
                        v31 = *(_QWORD *)a3->Data4 - 0x400BB63ABEA97CA4LL;
                      if ( v31 )
                      {
                        v32 = *(_QWORD *)&a3->Data1 - ApplicationFrameBackCommand;
                        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameBackCommand )
                          v32 = *(_QWORD *)a3->Data4 - 0x37530565A7963B8FLL;
                        if ( v32 )
                        {
                          v33 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapLeftCommand;
                          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapLeftCommand )
                            v33 = *(_QWORD *)a3->Data4 - 0x255BC252F81743AELL;
                          if ( v33 )
                          {
                            v34 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapRightCommand;
                            if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapRightCommand )
                              v34 = *(_QWORD *)a3->Data4 - 0x55331EAB62563487LL;
                            if ( v34 )
                              goto LABEL_26;
                            v17 = CApplicationFrameService::_SnapApplicationToLocation(v7, v40, 1LL);
                            v18 = retaddr;
                            if ( v17 >= 0 )
                              goto LABEL_26;
                            v19 = 1076LL;
                            goto LABEL_105;
                          }
                          v17 = CApplicationFrameService::_SnapApplicationToLocation(v7, v40, 0LL);
                          v18 = retaddr;
                          if ( v17 < 0 )
                          {
                            v19 = 1072LL;
                            goto LABEL_105;
                          }
                        }
                        else
                        {
                          v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 96LL))(
                                  *((_QWORD *)this + 17),
                                  v40,
                                  1LL);
                          v18 = retaddr;
                          if ( v17 < 0 )
                          {
                            v19 = 1068LL;
                            goto LABEL_105;
                          }
                        }
                      }
                      else
                      {
                        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 88LL))(
                                *((_QWORD *)this + 17),
                                v40,
                                1LL);
                        v18 = retaddr;
                        if ( v17 < 0 )
                        {
                          v19 = 1064LL;
                          goto LABEL_105;
                        }
                      }
                    }
                    else
                    {
                      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 104LL))(
                              *((_QWORD *)this + 17),
                              v40,
                              1LL);
                      v18 = retaddr;
                      if ( v17 < 0 )
                      {
                        v19 = 1060LL;
                        goto LABEL_105;
                      }
                    }
                  }
                  else
                  {
                    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 80LL))(
                            *((_QWORD *)this + 17),
                            v40,
                            1LL);
                    v18 = retaddr;
                    if ( v17 < 0 )
                    {
                      v19 = 1056LL;
                      goto LABEL_105;
                    }
                  }
                }
                else
                {
                  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 72LL))(
                          *((_QWORD *)this + 17),
                          v40,
                          1LL);
                  v18 = retaddr;
                  if ( v17 < 0 )
                  {
                    v19 = 1052LL;
                    goto LABEL_105;
                  }
                }
              }
              else
              {
                v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 64LL))(
                        *((_QWORD *)this + 17),
                        v40,
                        1LL);
                v18 = retaddr;
                if ( v17 < 0 )
                {
                  v19 = 1048LL;
                  goto LABEL_105;
                }
              }
            }
            else
            {
              v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 56LL))(
                      *((_QWORD *)this + 17),
                      v40,
                      1LL);
              v18 = retaddr;
              if ( v17 < 0 )
              {
                v19 = 1044LL;
                goto LABEL_105;
              }
            }
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 48LL))(
                    *((_QWORD *)this + 17),
                    v40,
                    1LL);
            v18 = retaddr;
            if ( v17 < 0 )
            {
              v19 = 1040LL;
              goto LABEL_105;
            }
          }
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 40LL))(
                  *((_QWORD *)this + 17),
                  v40,
                  1LL);
          v18 = retaddr;
          if ( v17 < 0 )
          {
            v19 = 1036LL;
            goto LABEL_105;
          }
        }
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 32LL))(
                *((_QWORD *)this + 17),
                v40,
                1LL);
        v18 = retaddr;
        if ( v17 < 0 )
        {
          v19 = 1032LL;
          goto LABEL_105;
        }
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 24LL))(
              *((_QWORD *)this + 17),
              v40,
              1LL);
      v18 = retaddr;
      if ( v17 < 0 )
      {
        v19 = 1028LL;
        goto LABEL_105;
      }
    }
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 120LL))(
            *((_QWORD *)this + 17),
            v40,
            1LL);
    v18 = retaddr;
    if ( v17 < 0 )
    {
      v19 = 1003LL;
LABEL_105:
      wil::details::in1diag3::_Log_Hr(
        v18,
        (void *)v19,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v17,
        v39);
    }
  }
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
  return 0LL;
}
