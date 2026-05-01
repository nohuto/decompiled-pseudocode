/*
 * XREFs of ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18040DBCC
 * Callers:
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18040B980 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18040BA60 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
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
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803C9BE4 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  void (__fastcall *v6)(struct IApplicationView *, LPCWSTR *); // rbx
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  const struct _TlgProvider_t *v12; // rbx
  const WCHAR *v13; // rcx
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  const struct _TlgProvider_t *v17; // rbx
  const WCHAR *v18; // rcx
  const WCHAR *v19; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v22[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  _QWORD v30[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  DWORD *p_CurrentThreadId; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  _BYTE *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  _QWORD *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  int *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  __int64 v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v53; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+198h] [rbp+90h] BYREF
  DWORD *v56; // [rsp+1A8h] [rbp+A0h]
  __int64 v57; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1E8h] [rbp+E0h] BYREF
  WINBOOL *v63; // [rsp+1F8h] [rbp+F0h]
  __int64 v64; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+218h] [rbp+110h] BYREF
  _BYTE *v67; // [rsp+228h] [rbp+120h]
  __int64 v68; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+238h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v30[1] = -2LL;
  pszPath = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v31);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      77LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v28 = -1LL;
  v29 = -1LL;
  v6(a2, &pszPath);
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
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v43 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v44 = 8LL;
      v30[0] = 0x1000000LL;
      v45 = v30;
      v46 = 8LL;
      v25 = *(_DWORD *)(v9 + 4);
      v47 = &v25;
      v48 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v9 + 48));
      v50 = v9 + 56;
      v51 = 4LL;
      TlgCreateSz(&v52, *(LPCSTR *)(v9 + 120));
      LODWORD(v26) = *(_DWORD *)v9;
      v53 = &v26;
      v54 = 4LL;
      TlgCreateWsz(&v55, *(LPCWSTR *)(v9 + 16));
      CurrentThreadId = *(_DWORD *)(v9 + 24);
      v56 = &CurrentThreadId;
      v57 = 4LL;
      TlgCreateSz(&v58, *(LPCSTR *)(v9 + 64));
      v21 = *(_DWORD *)(v9 + 72);
      v59 = &v21;
      v60 = 4LL;
      TlgCreateSz(&v61, *(LPCSTR *)(v9 + 80));
      TlgCreateWsz(&v62, *(LPCWSTR *)(v9 + 88));
      v22[0] = *(_DWORD *)(v9 + 96);
      v63 = v22;
      v64 = 4LL;
      TlgCreateSz(&v65, *(LPCSTR *)(v9 + 104));
      TlgCreateWsz(&v66, *(LPCWSTR *)(v9 + 112));
      v67 = v31;
      v68 = 16LL;
      v13 = &szAgent;
      if ( pszPath )
        v13 = pszPath;
      v14 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v13);
      TlgCreateWsz(&v69, v14);
      TlgWrite(v12, &unk_18050879A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v22, &Context) && v22[0] )
    {
      Context = &unk_1805C2098;
      v16 = operator new(v15, &unk_1805C2098);
      *v16 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v16 = &ImmersiveIconsLogging::`vftable';
      v16[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v17 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v17 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v34 = 8LL;
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v35 = &v21;
      v36 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v38 = 4LL;
      v39 = v31;
      v40 = 16LL;
      v18 = &szAgent;
      if ( pszPath )
        v18 = pszPath;
      v19 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v18);
      TlgCreateWsz(&v41, v19);
      TlgWrite(v17, &unk_18050871F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v32);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
