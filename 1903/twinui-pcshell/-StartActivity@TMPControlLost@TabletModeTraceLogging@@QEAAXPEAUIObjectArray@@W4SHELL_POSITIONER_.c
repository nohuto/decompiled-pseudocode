/*
 * XREFs of ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803B1E08
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803AB4B0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B918 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD354 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::TMPControlLost::StartActivity(__int64 a1, __int64 a2, int a3)
{
  const WCHAR *v3; // rsi
  unsigned __int16 **v7; // r8
  __int64 v8; // rcx
  wil::TraceLoggingProvider *v9; // rax
  _QWORD *v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  int v12; // edx
  DWORD CurrentThreadId; // eax
  const WCHAR *v14; // rdx
  int v15; // r10d
  const GUID *v16; // rax
  ApplicationViewTraceLoggingHelpers *v17; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  DWORD v19; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v20; // [rsp+40h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-51h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  __int64 v24; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  DWORD *v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+17h] BYREF
  int *v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+CCh] [rbp+33h]

  v3 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v17 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a2 + 32LL))(
         a2,
         0LL,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v17) >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
    v23 = -1LL;
    v24 = -1LL;
    ApplicationViewTraceLoggingHelpers::GetViewName(v17, (struct IApplicationView *)&v22, v7);
    v3 = v22;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_180599C78;
    v9 = (wil::TraceLoggingProvider *)operator new(v8, &unk_180599C78);
    wil::TraceLoggingProvider::TraceLoggingProvider(v9);
    *v10 = &ImmersiveIconsLogging::`vftable';
    v10[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
  {
    v28 &= v12;
    v26 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v27 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v31 = 0;
    v14 = &String2;
    v19 = CurrentThreadId;
    v29 = &v19;
    if ( v3 )
      v14 = v3;
    v30 = 4;
    TlgCreateWsz(&pDesc, v14);
    v35 = 0;
    v33 = &v20;
    v20 = a3;
    v34 = v15;
    v16 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v11, &unk_1804DF2FF, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v16, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
}
