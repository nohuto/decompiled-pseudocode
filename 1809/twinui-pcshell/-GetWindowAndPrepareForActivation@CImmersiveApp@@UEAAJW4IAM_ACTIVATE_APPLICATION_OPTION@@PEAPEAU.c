/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180043C00
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180043B64 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180043F5C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800444FC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x18011B804 (-GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // eax
  CImmersiveApp::CImmersiveWindowCollection *v7; // rcx
  int v8; // ebx
  HANDLE ProcessHeap; // rax
  WINBOOL fPending[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID Context[2]; // [rsp+30h] [rbp-D8h] BYREF
  void **v13; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  int *v16; // [rsp+70h] [rbp-98h]
  int *v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+80h] [rbp-88h] BYREF
  char v19; // [rsp+84h] [rbp-84h]
  _BYTE v20[32]; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+A8h] [rbp-60h] BYREF
  const char *v22; // [rsp+B0h] [rbp-58h]
  LPVOID lpMem; // [rsp+B8h] [rbp-50h]
  char v24; // [rsp+C0h] [rbp-48h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  _BYTE v26[144]; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v27[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v28; // [rsp+178h] [rbp+70h] BYREF

  Context[1] = (LPVOID)-2LL;
  v14[0] = 0LL;
  v14[1] = &v13;
  v14[2] = 0LL;
  LODWORD(v15) = 0;
  v16 = &v21;
  v17 = &v18;
  v18 = 0;
  v19 = 0;
  v24 = 0;
  v21 = 0;
  v22 = "GetWindowAndPrepareForActivation";
  lpMem = 0LL;
  v25 = 1LL;
  v27[0] = 0LL;
  memset_0(v26, 0, sizeof(v26));
  v27[1] = 0LL;
  v27[2] = 0LL;
  v28 = 0LL;
  v13 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StartActivity(
    (CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)&v13,
    *(const unsigned __int16 **)(a1 + 448));
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 592) || (*(_BYTE *)(a1 + 440) & 1) == 0 && (*(_DWORD *)(a1 + 440) & 8) == 0 )
  {
    v8 = -2147019873;
    goto LABEL_10;
  }
  if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
  {
    v8 = -2147023598;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 56LL))(*(_QWORD *)(a1 + 304));
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
  if ( v6 )
  {
    *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v7);
  }
  else
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation(v7) )
    {
      v8 = -2147024891;
      goto LABEL_10;
    }
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 152);
  }
  *(_QWORD *)fPending = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, WINBOOL *))(**(_QWORD **)(a1 + 304) + 136LL))(*(_QWORD *)(a1 + 304), fPending);
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)fPending + 24LL))(*(_QWORD *)fPending, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
LABEL_10:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v13, (unsigned int)v8);
  v13 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v13);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v28);
  wil::details::shared_buffer::reset(v27);
  if ( v24 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v24 = 0;
  }
  lpMem = 0LL;
  if ( v18 == 1 )
  {
    v18 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
    {
      Context[0] = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v20);
  }
  v18 = 3;
  if ( (_DWORD)v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  return (unsigned int)v8;
}
