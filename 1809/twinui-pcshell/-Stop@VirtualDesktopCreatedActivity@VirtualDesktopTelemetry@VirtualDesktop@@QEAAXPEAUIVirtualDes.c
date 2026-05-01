/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180387BCC
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180385BF0 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
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
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  int *v6; // rsi
  int v7; // eax
  int *v8; // rsi
  const struct _TlgProvider_t *v9; // rdi
  const struct _TlgProvider_t *v10; // rdi
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v14; // [rsp+3Ch] [rbp-C4h] BYREF
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
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+120h] [rbp+20h] BYREF
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+140h] [rbp+40h] BYREF
  int *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+160h] [rbp+60h] BYREF
  DWORD *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+190h] [rbp+90h] BYREF
  int *v47; // [rsp+1A0h] [rbp+A0h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v51; // [rsp+1D0h] [rbp+D0h]
  __int64 v52; // [rsp+1D8h] [rbp+D8h]
  WINBOOL *v53; // [rsp+1E0h] [rbp+E0h]
  __int64 v54; // [rsp+1E8h] [rbp+E8h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v19 = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v20);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      25LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (int *)*((_QWORD *)this + 6);
  v7 = v6[19];
  if ( v7 < 0 && v7 == v6[21] )
    v8 = v6 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v8 )
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
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v17 = v8[1];
      v31 = &v17;
      v32 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v8 + 6));
      v34 = v8 + 14;
      v35 = 4LL;
      TlgCreateSz(&v36, *((LPCSTR *)v8 + 15));
      v18 = *v8;
      v37 = &v18;
      v38 = 4LL;
      TlgCreateWsz(&v39, *((LPCWSTR *)v8 + 2));
      v11 = v8[6];
      v40 = &v11;
      v41 = 4LL;
      TlgCreateSz(&v42, *((LPCSTR *)v8 + 8));
      CurrentThreadId = v8[18];
      v43 = &CurrentThreadId;
      v44 = 4LL;
      TlgCreateSz(&v45, *((LPCSTR *)v8 + 10));
      TlgCreateWsz(&v46, *((LPCWSTR *)v8 + 11));
      v13 = v8[24];
      v47 = &v13;
      v48 = 4LL;
      TlgCreateSz(&v49, *((LPCSTR *)v8 + 13));
      TlgCreateWsz(&v50, *((LPCWSTR *)v8 + 14));
      v51 = v20;
      v52 = 16LL;
      v14 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      v53 = &v14;
      v54 = 4LL;
      TlgWrite(v9, &unk_1804687FA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
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
      v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      v28 = &v11;
      v29 = 4LL;
      TlgWrite(v10, &unk_180468795, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v21);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)((char *)this + 8));
}
