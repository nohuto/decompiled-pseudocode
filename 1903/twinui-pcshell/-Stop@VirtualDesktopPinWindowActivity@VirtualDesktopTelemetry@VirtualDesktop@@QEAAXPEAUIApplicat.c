/*
 * XREFs of ?Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803F945C
 * Callers:
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1803F7F90 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173DB8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803AA6D4 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  void (__fastcall *v5)(struct IApplicationView *, LPCWSTR *); // rbx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const struct _TlgProvider_t *v11; // rbx
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  const struct _TlgProvider_t *v16; // rbx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v21[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  _QWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v30[16]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  DWORD *p_CurrentThreadId; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  _BYTE *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  _QWORD *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  int *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  __int64 v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+198h] [rbp+90h] BYREF
  DWORD *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1E8h] [rbp+E0h] BYREF
  WINBOOL *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+218h] [rbp+110h] BYREF
  _BYTE *v66; // [rsp+228h] [rbp+120h]
  __int64 v67; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+238h] [rbp+130h] BYREF

  v29[1] = -2LL;
  if ( a3 )
    (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v30);
  pszPath = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v5 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v27 = -1LL;
  v28 = -1LL;
  v5(a2, &pszPath);
  v6 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 76);
  if ( v7 < 0 && v7 == *(_DWORD *)(v6 + 84) )
    v8 = v6 + 80;
  else
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
      v42 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v43 = 8LL;
      v29[0] = 0x1000000LL;
      v44 = v29;
      v45 = 8LL;
      v24 = *(_DWORD *)(v8 + 4);
      v46 = &v24;
      v47 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v8 + 48));
      v49 = v8 + 56;
      v50 = 4LL;
      TlgCreateSz(&v51, *(LPCSTR *)(v8 + 120));
      LODWORD(v25) = *(_DWORD *)v8;
      v52 = &v25;
      v53 = 4LL;
      TlgCreateWsz(&v54, *(LPCWSTR *)(v8 + 16));
      CurrentThreadId = *(_DWORD *)(v8 + 24);
      v55 = &CurrentThreadId;
      v56 = 4LL;
      TlgCreateSz(&v57, *(LPCSTR *)(v8 + 64));
      v20 = *(_DWORD *)(v8 + 72);
      v58 = &v20;
      v59 = 4LL;
      TlgCreateSz(&v60, *(LPCSTR *)(v8 + 80));
      TlgCreateWsz(&v61, *(LPCWSTR *)(v8 + 88));
      v21[0] = *(_DWORD *)(v8 + 96);
      v62 = v21;
      v63 = 4LL;
      TlgCreateSz(&v64, *(LPCSTR *)(v8 + 104));
      TlgCreateWsz(&v65, *(LPCWSTR *)(v8 + 112));
      v66 = v30;
      v67 = 16LL;
      v12 = &String2;
      if ( pszPath )
        v12 = pszPath;
      v13 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v12);
      TlgCreateWsz(&v68, v13);
      TlgWrite(v11, &unk_1804E2A70, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v21, &Context) && v21[0] )
    {
      Context = &unk_180599C78;
      v15 = operator new(v14, &unk_180599C78);
      *v15 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v15 = &ImmersiveIconsLogging::`vftable';
      v15[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v16 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v32 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v33 = 8LL;
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v34 = &v20;
      v35 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v37 = 4LL;
      v38 = v30;
      v39 = 16LL;
      v17 = &String2;
      if ( pszPath )
        v17 = pszPath;
      v18 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v17);
      TlgCreateWsz(&v40, v18);
      TlgWrite(v16, &unk_1804E2D5B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
