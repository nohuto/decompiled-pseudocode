/*
 * XREFs of ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x18039305C
 * Callers:
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180391C10 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *this,
        const unsigned __int16 *a2,
        struct IVirtualDesktop *a3)
{
  int *v5; // rsi
  int v6; // eax
  int *v7; // rsi
  const struct _TlgProvider_t *v8; // rdi
  const WCHAR *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  const WCHAR *v11; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v14; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[16]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-90h] BYREF
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  DWORD *p_CurrentThreadId; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  _BYTE *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+120h] [rbp+20h] BYREF
  int *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+140h] [rbp+40h] BYREF
  DWORD *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+160h] [rbp+60h] BYREF
  int *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+190h] [rbp+90h] BYREF
  WINBOOL *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v50; // [rsp+1D0h] [rbp+D0h]
  __int64 v51; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1E0h] [rbp+E0h] BYREF

  v19 = -2LL;
  if ( a3 )
    (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v20);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 < 0 && v6 == v5[21] )
    v7 = v5 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v7 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v17 = v7[1];
      v30 = &v17;
      v31 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v7 + 6));
      v33 = v7 + 14;
      v34 = 4LL;
      TlgCreateSz(&v35, *((LPCSTR *)v7 + 15));
      v18 = *v7;
      v36 = &v18;
      v37 = 4LL;
      TlgCreateWsz(&v38, *((LPCWSTR *)v7 + 2));
      CurrentThreadId = v7[6];
      v39 = &CurrentThreadId;
      v40 = 4LL;
      TlgCreateSz(&v41, *((LPCSTR *)v7 + 8));
      v13 = v7[18];
      v42 = &v13;
      v43 = 4LL;
      TlgCreateSz(&v44, *((LPCSTR *)v7 + 10));
      TlgCreateWsz(&v45, *((LPCWSTR *)v7 + 11));
      v14 = v7[24];
      v46 = &v14;
      v47 = 4LL;
      TlgCreateSz(&v48, *((LPCSTR *)v7 + 13));
      TlgCreateWsz(&v49, *((LPCWSTR *)v7 + 14));
      v50 = v20;
      v51 = 16LL;
      v9 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a2);
      TlgCreateWsz(&v52, v9);
      TlgWrite(v8, &unk_180469C7D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v14, &Context) && v14 )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v22 = &v13;
      v23 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v25 = 4LL;
      v26 = v20;
      v27 = 16LL;
      v11 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a2);
      TlgCreateWsz(&v28, v11);
      TlgWrite(v10, &unk_180469F0F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v21);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)((char *)this + 8));
}
