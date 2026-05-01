/*
 * XREFs of ?StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z @ 0x18026EBFC
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180272284 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000C238 (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RequestNavigateToView::StartActivity(
        ViewManagerInteropTraceLogging::RequestNavigateToView *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  DWORD v10; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+74h] [rbp-25h]
  DWORD *v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+80h] [rbp-19h]
  int v18; // [rsp+84h] [rbp-15h]
  int *v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+94h] [rbp-5h]
  int *v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A4h] [rbp+Bh]
  int *v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B4h] [rbp+1Bh]
  char *v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C4h] [rbp+2Bh]
  int v31; // [rsp+100h] [rbp+67h] BYREF
  int v32; // [rsp+108h] [rbp+6Fh] BYREF
  int v33; // [rsp+110h] [rbp+77h] BYREF

  v33 = a4;
  v32 = a3;
  v31 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v15 = 0;
    v13 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v10 = CurrentThreadId;
    v16 = &v10;
    v19 = &v31;
    v22 = &v32;
    v25 = &v33;
    v28 = &a5;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1804D0638, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 8u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::RequestNavigateToView *)((char *)this + 8));
}
