/*
 * XREFs of ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x18040D28C
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18040C260 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801931B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  TraceLoggingHProvider v12; // r10
  __int64 v13; // rcx
  _QWORD *v14; // rax
  const struct _TlgProvider_t *v15; // rdi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v18[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[24]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  DWORD *p_CurrentThreadId; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  _BYTE *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  _QWORD *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  __int64 v45; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+198h] [rbp+90h] BYREF
  DWORD *v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v54; // [rsp+1C8h] [rbp+C0h]
  __int64 v55; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1E8h] [rbp+E0h] BYREF
  WINBOOL *v58; // [rsp+1F8h] [rbp+F0h]
  __int64 v59; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v62; // [rsp+228h] [rbp+120h]
  __int64 v63; // [rsp+230h] [rbp+128h]
  _BYTE *v64; // [rsp+238h] [rbp+130h]
  __int64 v65; // [rsp+240h] [rbp+138h]
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v23[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v24);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      39LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v25);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      40LL,
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
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v9 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v11 = operator new(v10, &unk_1805C2098);
      *v11 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v11 = &ImmersiveIconsLogging::`vftable';
      v11[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v38 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v39 = 8LL;
      v23[0] = 0x1000000LL;
      v40 = v23;
      v41 = 8LL;
      v21 = *(_DWORD *)(v9 + 4);
      v42 = &v21;
      v43 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v9 + 48));
      v45 = v9 + 56;
      v46 = 4LL;
      TlgCreateSz(&v47, *(LPCSTR *)(v9 + 120));
      LODWORD(v22) = *(_DWORD *)v9;
      v48 = &v22;
      v49 = 4LL;
      TlgCreateWsz(&v50, *(LPCWSTR *)(v9 + 16));
      CurrentThreadId = *(_DWORD *)(v9 + 24);
      v51 = &CurrentThreadId;
      v52 = 4LL;
      TlgCreateSz(&v53, *(LPCSTR *)(v9 + 64));
      v17 = *(_DWORD *)(v9 + 72);
      v54 = &v17;
      v55 = 4LL;
      TlgCreateSz(&v56, *(LPCSTR *)(v9 + 80));
      TlgCreateWsz(&v57, *(LPCWSTR *)(v9 + 88));
      v18[0] = *(_DWORD *)(v9 + 96);
      v58 = v18;
      v59 = 4LL;
      TlgCreateSz(&v60, *(LPCSTR *)(v9 + 104));
      TlgCreateWsz(&v61, *(LPCWSTR *)(v9 + 112));
      v62 = &v24;
      v63 = 16LL;
      v64 = v25;
      v65 = 16LL;
      TlgWrite(v12, &unk_180507CED, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v18, &Context) && v18[0] )
    {
      Context = &unk_1805C2098;
      v14 = operator new(v13, &unk_1805C2098);
      *v14 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v14 = &ImmersiveIconsLogging::`vftable';
      v14[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v15 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v27 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v28 = 8LL;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v29 = &v17;
      v30 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v32 = 4LL;
      v33 = &v24;
      v34 = 16LL;
      v35 = v25;
      v36 = 16LL;
      TlgWrite(v15, &unk_180507F82, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)((char *)this + 8));
}
