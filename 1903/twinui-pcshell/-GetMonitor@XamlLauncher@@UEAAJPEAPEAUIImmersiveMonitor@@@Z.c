/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18002FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800300F0 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180030228 (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800302C4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802F1CC0 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1802F1CC0.c)
 */

__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  BOOL inited; // eax
  void *v5; // rdx
  const struct _TlgProvider_t *v6; // rsi
  const GUID *v7; // rax
  UINT32 v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  void *v13; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v15; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v19; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v21; // [rsp+48h] [rbp-B8h] BYREF
  void **v22; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+70h] [rbp-90h]
  int *v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  char v28; // [rsp+8Ch] [rbp-74h]
  _BYTE v29[32]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+B0h] [rbp-50h] BYREF
  const char *v31; // [rsp+B8h] [rbp-48h]
  LPVOID v32; // [rsp+C0h] [rbp-40h]
  char v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  _BYTE v35[144]; // [rsp+D8h] [rbp-28h] BYREF
  LPVOID lpMem; // [rsp+168h] [rbp+68h]
  __int64 v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  void *v39; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  void *v41; // [rsp+1B0h] [rbp+B0h]
  __int64 v42; // [rsp+1B8h] [rbp+B8h]
  DWORD *p_CurrentThreadId; // [rsp+1C0h] [rbp+C0h]
  __int64 v44; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 31) )
    return 2147943568LL;
  v23[0] = 0LL;
  v23[1] = &v22;
  v23[2] = 0LL;
  v25 = &v30;
  v24 = 0;
  v26 = &v27;
  v27 = 0;
  v31 = "GetImmersiveMonitor";
  v28 = 0;
  v33 = 0;
  v30 = 0;
  v32 = 0LL;
  v34 = 1LL;
  lpMem = 0LL;
  memset_0(v35, 0, sizeof(v35));
  v39 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v22 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(&v22);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v5 = &`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    Context = &qword_180599F68;
    qword_180599F68 = &ShellScreenClippingLogging::`vftable';
    qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v42 = 8LL;
    v41 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    CurrentThreadId = GetCurrentThreadId();
    v44 = 4LL;
    p_CurrentThreadId = &CurrentThreadId;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v22);
    TlgWrite(v6, &unk_1804D6EC1, (LPCGUID)(v26 + 2), v7, v8, &pData);
  }
  if ( !v24 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  v9 = *((_QWORD *)this + 16);
  *a2 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 8LL))(v10, v5);
    *a2 = *(struct IImmersiveMonitor **)(v9 + 64);
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v22);
    v11 = 0;
  }
  else
  {
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL,
      cData);
  }
  v22 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
  if ( v39 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)v39) )
    {
      v13 = v39;
      if ( v39 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v39 + 8);
        operator delete(v13, (const struct std::nothrow_t *)0x100);
      }
    }
    v39 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v37 = 0LL;
  }
  if ( v33 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v32);
    v33 = 0;
  }
  v32 = 0LL;
  if ( v27 == 1 )
  {
    v27 = 2;
    v21 = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v19, &v21) && v19 )
    {
      v21 = &qword_180599F68;
      qword_180599F68 = &ShellScreenClippingLogging::`vftable';
      qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v21 + 1), v29);
  }
  v27 = 3;
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  return v11;
}
