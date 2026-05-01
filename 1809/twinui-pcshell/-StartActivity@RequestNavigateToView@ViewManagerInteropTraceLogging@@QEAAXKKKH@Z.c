/*
 * XREFs of ?StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z @ 0x180218C3C
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021C878 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006FC28 (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
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
  WINBOOL fPending; // [rsp+38h] [rbp-51h] BYREF
  DWORD v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  DWORD *v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+74h] [rbp-15h]
  int *v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+84h] [rbp-5h]
  int *v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+94h] [rbp+Bh]
  int *v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A4h] [rbp+1Bh]
  char *v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B4h] [rbp+2Bh]
  int v28; // [rsp+F0h] [rbp+67h] BYREF
  int v29; // [rsp+F8h] [rbp+6Fh] BYREF
  int v30; // [rsp+100h] [rbp+77h] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v10 = CurrentThreadId;
    v13 = &v10;
    v16 = &v28;
    v19 = &v29;
    v22 = &v30;
    v25 = &a5;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_18045B927, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::RequestNavigateToView *)((char *)this + 8));
}
