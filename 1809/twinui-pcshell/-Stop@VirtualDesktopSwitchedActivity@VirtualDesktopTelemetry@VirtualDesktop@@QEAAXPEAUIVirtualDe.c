/*
 * XREFs of ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x180388450
 * Callers:
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180389C60 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
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
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  TraceLoggingHProvider v10; // r10
  const struct _TlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+88h] [rbp-80h] BYREF
  int *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  DWORD *p_CurrentThreadId; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  __int64 *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  _BYTE *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  int *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  __int64 v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+138h] [rbp+30h] BYREF
  _QWORD *v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+158h] [rbp+50h] BYREF
  DWORD *v40; // [rsp+168h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+178h] [rbp+70h] BYREF
  int *v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+1A8h] [rbp+A0h] BYREF
  WINBOOL *v47; // [rsp+1B8h] [rbp+B0h]
  __int64 v48; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v51; // [rsp+1E8h] [rbp+E0h]
  __int64 v52; // [rsp+1F0h] [rbp+E8h]
  _BYTE *v53; // [rsp+1F8h] [rbp+F0h]
  __int64 v54; // [rsp+200h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v18[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v19);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      54LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v20);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      55LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 6);
  v8 = *(_DWORD *)(v7 + 76);
  if ( v8 < 0 && v8 == *(_DWORD *)(v7 + 84) )
    v9 = v7 + 80;
  else
    v9 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v9 )
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
      v17 = *(_DWORD *)(v9 + 4);
      v31 = &v17;
      v32 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v9 + 48));
      v34 = v9 + 56;
      v35 = 4LL;
      TlgCreateSz(&v36, *(LPCSTR *)(v9 + 120));
      LODWORD(v18[0]) = *(_DWORD *)v9;
      v37 = v18;
      v38 = 4LL;
      TlgCreateWsz(&v39, *(LPCWSTR *)(v9 + 16));
      CurrentThreadId = *(_DWORD *)(v9 + 24);
      v40 = &CurrentThreadId;
      v41 = 4LL;
      TlgCreateSz(&v42, *(LPCSTR *)(v9 + 64));
      v13 = *(_DWORD *)(v9 + 72);
      v43 = &v13;
      v44 = 4LL;
      TlgCreateSz(&v45, *(LPCSTR *)(v9 + 80));
      TlgCreateWsz(&v46, *(LPCWSTR *)(v9 + 88));
      v14[0] = *(_DWORD *)(v9 + 96);
      v47 = v14;
      v48 = 4LL;
      TlgCreateSz(&v49, *(LPCSTR *)(v9 + 104));
      TlgCreateWsz(&v50, *(LPCWSTR *)(v9 + 112));
      v51 = &v19;
      v52 = 16LL;
      v53 = v20;
      v54 = 16LL;
      TlgWrite(v10, &unk_180468926, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v14, &Context) && v14[0] )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v22 = &v13;
      v23 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v25 = 4LL;
      v26 = &v19;
      v27 = 16LL;
      v28 = v20;
      v29 = 16LL;
      TlgWrite(v11, &unk_180468BBC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v21);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)((char *)this + 8));
}
