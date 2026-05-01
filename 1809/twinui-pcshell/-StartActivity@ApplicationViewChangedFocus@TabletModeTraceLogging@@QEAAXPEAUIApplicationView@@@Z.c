/*
 * XREFs of ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18034B874
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180070710 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180307308 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180347864 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::ApplicationViewChangedFocus::StartActivity(
        TabletModeTraceLogging::ApplicationViewChangedFocus *this,
        struct IApplicationView *a2)
{
  unsigned __int16 **v4; // r8
  const struct _TlgProvider_t *v5; // rbx
  DWORD CurrentThreadId; // eax
  const WCHAR *v7; // rdx
  const GUID *v8; // rax
  UINT32 cData; // r10d
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  DWORD v11; // [rsp+34h] [rbp-25h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-19h] BYREF
  __int64 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  DWORD *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+37h] BYREF

  pwsz = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v14 = -1LL;
  v15 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetViewName(a2, (struct IApplicationView *)&pwsz, v4);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v7 = &word_180411F30;
    v11 = CurrentThreadId;
    v17 = &v11;
    v18 = 4;
    if ( pwsz )
      v7 = pwsz;
    TlgCreateWsz(&pDesc, v7);
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_18046653B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplicationViewChangedFocus *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
