/*
 * XREFs of ?StopActivity@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@MEAAXXZ @ 0x180390C20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::StopActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rsi
  TraceLoggingHProvider v5; // r10
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v9[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-A0h] BYREF
  int *v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v26; // [rsp+108h] [rbp+0h]
  __int64 v27; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v29; // [rsp+128h] [rbp+20h]
  __int64 v30; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+138h] [rbp+30h] BYREF
  int *v32; // [rsp+148h] [rbp+40h]
  __int64 v33; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v36; // [rsp+178h] [rbp+70h]
  __int64 v37; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+198h] [rbp+90h] BYREF

  v13[1] = -2LL;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v2 + 84) )
    v4 = v2 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
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
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v12 = *(_DWORD *)(v4 + 4);
      v20 = &v12;
      v21 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v4 + 48));
      v23 = v4 + 56;
      v24 = 4LL;
      TlgCreateSz(&v25, *(LPCSTR *)(v4 + 120));
      LODWORD(v13[0]) = *(_DWORD *)v4;
      v26 = v13;
      v27 = 4LL;
      TlgCreateWsz(&v28, *(LPCWSTR *)(v4 + 16));
      CurrentThreadId = *(_DWORD *)(v4 + 24);
      v29 = &CurrentThreadId;
      v30 = 4LL;
      TlgCreateSz(&v31, *(LPCSTR *)(v4 + 64));
      v8 = *(_DWORD *)(v4 + 72);
      v32 = &v8;
      v33 = 4LL;
      TlgCreateSz(&v34, *(LPCSTR *)(v4 + 80));
      TlgCreateWsz(&v35, *(LPCWSTR *)(v4 + 88));
      v9[0] = *(_DWORD *)(v4 + 96);
      v36 = v9;
      v37 = 4LL;
      TlgCreateSz(&v38, *(LPCSTR *)(v4 + 104));
      TlgCreateWsz(&v39, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v5, &unk_18046918A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v9, &Context) && v9[0] )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v8 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v15 = &v8;
      v16 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v18 = 4LL;
      TlgWrite(v6, &unk_180469139, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v14);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)((char *)this + 8));
}
