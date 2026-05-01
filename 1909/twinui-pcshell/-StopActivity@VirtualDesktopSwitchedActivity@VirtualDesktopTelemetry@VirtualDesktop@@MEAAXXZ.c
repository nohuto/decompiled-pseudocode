/*
 * XREFs of ?StopActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@MEAAXXZ @ 0x18040E870
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801931B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StopActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  TraceLoggingHProvider v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  int *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  DWORD *p_CurrentThreadId; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  _QWORD *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  int *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  __int64 v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v37; // [rsp+148h] [rbp+40h]
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

  v18[1] = -2LL;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v2 + 84) )
    v4 = v2 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v6 = operator new(v5, &unk_1805C2098);
      *v6 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v6 = &ImmersiveIconsLogging::`vftable';
      v6[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v27 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v28 = 8LL;
      v18[0] = 0x1000000LL;
      v29 = v18;
      v30 = 8LL;
      v16 = *(_DWORD *)(v4 + 4);
      v31 = &v16;
      v32 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v4 + 48));
      v34 = v4 + 56;
      v35 = 4LL;
      TlgCreateSz(&v36, *(LPCSTR *)(v4 + 120));
      LODWORD(v17) = *(_DWORD *)v4;
      v37 = &v17;
      v38 = 4LL;
      TlgCreateWsz(&v39, *(LPCWSTR *)(v4 + 16));
      CurrentThreadId = *(_DWORD *)(v4 + 24);
      v40 = &CurrentThreadId;
      v41 = 4LL;
      TlgCreateSz(&v42, *(LPCSTR *)(v4 + 64));
      v12 = *(_DWORD *)(v4 + 72);
      v43 = &v12;
      v44 = 4LL;
      TlgCreateSz(&v45, *(LPCSTR *)(v4 + 80));
      TlgCreateWsz(&v46, *(LPCWSTR *)(v4 + 88));
      v13[0] = *(_DWORD *)(v4 + 96);
      v47 = v13;
      v48 = 4LL;
      TlgCreateSz(&v49, *(LPCSTR *)(v4 + 104));
      TlgCreateWsz(&v50, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v7, &unk_1805085E9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v13, &Context) && v13[0] )
    {
      Context = &unk_1805C2098;
      v9 = operator new(v8, &unk_1805C2098);
      *v9 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v9 = &ImmersiveIconsLogging::`vftable';
      v9[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v20 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = 8LL;
      v12 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v22 = &v12;
      v23 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v25 = 4LL;
      TlgWrite(v10, &unk_18050858A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v19);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)((char *)this + 8));
}
