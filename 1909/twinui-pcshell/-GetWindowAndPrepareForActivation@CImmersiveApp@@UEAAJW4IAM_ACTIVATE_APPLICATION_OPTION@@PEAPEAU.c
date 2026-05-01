/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180010A80
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180010DF0 (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180011274 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006E8A0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x180162DC4 (-GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // ebx
  HANDLE ProcessHeap; // rax
  WINBOOL fPending[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID Context[2]; // [rsp+30h] [rbp-D8h] BYREF
  void **v11; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-A0h]
  int *v14; // [rsp+70h] [rbp-98h]
  int *v15; // [rsp+78h] [rbp-90h]
  int v16; // [rsp+80h] [rbp-88h] BYREF
  char v17; // [rsp+84h] [rbp-84h]
  _BYTE v18[32]; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+A8h] [rbp-60h] BYREF
  const char *v20; // [rsp+B0h] [rbp-58h]
  LPVOID lpMem; // [rsp+B8h] [rbp-50h]
  char v22; // [rsp+C0h] [rbp-48h]
  __int64 v23; // [rsp+C8h] [rbp-40h]
  _BYTE v24[144]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v25[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v26; // [rsp+178h] [rbp+70h] BYREF

  Context[1] = (LPVOID)-2LL;
  v12[0] = 0LL;
  v12[1] = &v11;
  v12[2] = 0LL;
  LODWORD(v13) = 0;
  v14 = &v19;
  v15 = &v16;
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "GetWindowAndPrepareForActivation";
  lpMem = 0LL;
  v23 = 1LL;
  v25[0] = 0LL;
  memset_0(v24, 0, sizeof(v24));
  v25[1] = 0LL;
  v25[2] = 0LL;
  v26 = 0LL;
  v11 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StartActivity(
    (CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)&v11,
    *(const unsigned __int16 **)(a1 + 480));
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 624) || (*(_BYTE *)(a1 + 472) & 1) == 0 && (*(_DWORD *)(a1 + 472) & 8) == 0 )
  {
    v6 = -2147019873;
    goto LABEL_10;
  }
  if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
  {
    v6 = -2147023598;
    goto LABEL_10;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 56LL))(*(_QWORD *)(a1 + 336)) )
  {
    *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
  }
  else
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) )
    {
      v6 = -2147024891;
      goto LABEL_10;
    }
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 184);
  }
  *(_QWORD *)fPending = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, WINBOOL *))(**(_QWORD **)(a1 + 336) + 136LL))(*(_QWORD *)(a1 + 336), fPending);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)fPending + 24LL))(*(_QWORD *)fPending, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
LABEL_10:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v11, (unsigned int)v6);
  v11 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v11);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v26);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v25);
  if ( v22 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v22 = 0;
  }
  lpMem = 0LL;
  if ( v16 == 1 )
  {
    v16 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
    {
      Context[0] = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v18);
  }
  v16 = 3;
  if ( (_DWORD)v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  return (unsigned int)v6;
}
