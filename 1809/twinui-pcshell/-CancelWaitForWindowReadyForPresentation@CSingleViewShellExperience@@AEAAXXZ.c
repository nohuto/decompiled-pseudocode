/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800191E0
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017774 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180017C5C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180017F50 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1803AE3BC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1803AF514 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180019188 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180044988 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x180045478 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005CF04 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA424 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(CSingleViewShellExperience *this)
{
  __int64 v2; // rsi
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v4; // rbx
  int v5; // eax
  int v6; // eax
  WINBOOL fPending[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID Context[3]; // [rsp+30h] [rbp-D8h] BYREF
  void **v9; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-A0h]
  int *v12; // [rsp+70h] [rbp-98h]
  int *v13; // [rsp+78h] [rbp-90h]
  int v14; // [rsp+80h] [rbp-88h] BYREF
  char v15; // [rsp+84h] [rbp-84h]
  _BYTE v16[32]; // [rsp+88h] [rbp-80h] BYREF
  int v17; // [rsp+A8h] [rbp-60h] BYREF
  const char *v18; // [rsp+B0h] [rbp-58h]
  __int64 v19; // [rsp+B8h] [rbp-50h]
  char v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  _BYTE v22[144]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v23[3]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v24; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  Context[1] = (LPVOID)-2LL;
  v2 = *((_QWORD *)this + 15);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v4 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  v10[0] = 0LL;
  v10[1] = &v9;
  v10[2] = 0LL;
  LODWORD(v11) = 0;
  v12 = &v17;
  v13 = &v14;
  v14 = 0;
  v15 = 0;
  v20 = 0;
  v17 = 0;
  v18 = "CancelWaitForWindowReadyForPresentation";
  v19 = 0LL;
  v21 = 1LL;
  v23[0] = 0LL;
  memset_0(v22, 0, sizeof(v22));
  v23[1] = 0LL;
  v23[2] = 0LL;
  v24 = 0LL;
  v9 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)&v9,
    v4,
    StringRawBuffer,
    v2 != 0);
  if ( *((_QWORD *)this + 15) )
  {
    *(_QWORD *)fPending = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (char *)this + 24,
           fPending);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x392,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5,
        fPending[0]);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)fPending + 88LL))(
             *(_QWORD *)fPending,
             *((_QWORD *)this + 15));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x394,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v6,
          fPending[0]);
      *((_QWORD *)this + 15) = 0LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9);
  v9 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v9);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v24);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v23);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v17);
  if ( v14 == 1 )
  {
    v14 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, Context)
      && fPending[0] )
    {
      Context[0] = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context[0] + 1), v16);
  }
  v14 = 3;
  if ( (_DWORD)v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
}
