/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1803ED6CC
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1803EB660 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173DB8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  int *v6; // rax
  int v7; // ecx
  int *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const struct _TlgProvider_t *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  const struct _TlgProvider_t *v14; // rdi
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v18; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[24]; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _BYTE *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  _QWORD *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+160h] [rbp+60h] BYREF
  int *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+180h] [rbp+80h] BYREF
  int *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1A0h] [rbp+A0h] BYREF
  DWORD *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+200h] [rbp+100h] BYREF
  _BYTE *v61; // [rsp+210h] [rbp+110h]
  __int64 v62; // [rsp+218h] [rbp+118h]
  WINBOOL *v63; // [rsp+220h] [rbp+120h]
  __int64 v64; // [rsp+228h] [rbp+128h]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v23[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v24);
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
  if ( v7 >= 0 || (v8 = v6 + 20, v7 != v6[21]) )
    v8 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v8 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v10 = operator new(v9, &unk_180599C78);
      *v10 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v10 = &ImmersiveIconsLogging::`vftable';
      v10[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v37 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v38 = 8LL;
      v23[0] = 0x1000000LL;
      v39 = v23;
      v40 = 8LL;
      v21 = v8[1];
      v41 = &v21;
      v42 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v8 + 6));
      v44 = v8 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, *((LPCSTR *)v8 + 15));
      v22 = *v8;
      v47 = &v22;
      v48 = 4LL;
      TlgCreateWsz(&v49, *((LPCWSTR *)v8 + 2));
      v15 = v8[6];
      v50 = &v15;
      v51 = 4LL;
      TlgCreateSz(&v52, *((LPCSTR *)v8 + 8));
      CurrentThreadId = v8[18];
      v53 = &CurrentThreadId;
      v54 = 4LL;
      TlgCreateSz(&v55, *((LPCSTR *)v8 + 10));
      TlgCreateWsz(&v56, *((LPCWSTR *)v8 + 11));
      v17 = v8[24];
      v57 = &v17;
      v58 = 4LL;
      TlgCreateSz(&v59, *((LPCSTR *)v8 + 13));
      TlgCreateWsz(&v60, *((LPCWSTR *)v8 + 14));
      v61 = v24;
      v62 = 16LL;
      v18 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      v63 = &v18;
      v64 = 4LL;
      TlgWrite(v11, &unk_1804E18CF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v18, &Context) && v18 )
    {
      Context = &unk_180599C78;
      v13 = operator new(v12, &unk_180599C78);
      *v13 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v13 = &ImmersiveIconsLogging::`vftable';
      v13[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v26 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v27 = 8LL;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v17;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v31 = 4LL;
      v32 = v24;
      v33 = 16LL;
      v15 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      v34 = &v15;
      v35 = 4LL;
      TlgWrite(v14, &unk_1804E185A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)((char *)this + 8));
}
