/*
 * XREFs of ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1803F991C
 * Callers:
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1803FB190 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
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
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173DB8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803AA6D4 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *this,
        const unsigned __int16 *a2,
        struct IVirtualDesktop *a3)
{
  int *v5; // rsi
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  const struct _TlgProvider_t *v14; // rdi
  const WCHAR *v15; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v18; // [rsp+38h] [rbp-C8h] BYREF
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
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  _QWORD *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+160h] [rbp+60h] BYREF
  int *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+180h] [rbp+80h] BYREF
  DWORD *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1D0h] [rbp+D0h] BYREF
  WINBOOL *v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+200h] [rbp+100h] BYREF
  _BYTE *v60; // [rsp+210h] [rbp+110h]
  __int64 v61; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+220h] [rbp+120h] BYREF

  v23[1] = -2LL;
  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v24);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 < 0 && v6 == v5[21] )
    v7 = v5 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v7 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v9 = operator new(v8, &unk_180599C78);
      *v9 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v9 = &ImmersiveIconsLogging::`vftable';
      v9[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v36 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v37 = 8LL;
      v23[0] = 0x1000000LL;
      v38 = v23;
      v39 = 8LL;
      v21 = v7[1];
      v40 = &v21;
      v41 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v7 + 6));
      v43 = v7 + 14;
      v44 = 4LL;
      TlgCreateSz(&v45, *((LPCSTR *)v7 + 15));
      v22 = *v7;
      v46 = &v22;
      v47 = 4LL;
      TlgCreateWsz(&v48, *((LPCWSTR *)v7 + 2));
      CurrentThreadId = v7[6];
      v49 = &CurrentThreadId;
      v50 = 4LL;
      TlgCreateSz(&v51, *((LPCSTR *)v7 + 8));
      v17 = v7[18];
      v52 = &v17;
      v53 = 4LL;
      TlgCreateSz(&v54, *((LPCSTR *)v7 + 10));
      TlgCreateWsz(&v55, *((LPCWSTR *)v7 + 11));
      v18 = v7[24];
      v56 = &v18;
      v57 = 4LL;
      TlgCreateSz(&v58, *((LPCSTR *)v7 + 13));
      TlgCreateWsz(&v59, *((LPCWSTR *)v7 + 14));
      v60 = v24;
      v61 = 16LL;
      v11 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(a2);
      TlgCreateWsz(&v62, v11);
      TlgWrite(v10, &unk_1804E2FE6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
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
      v15 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(a2);
      TlgCreateWsz(&v34, v15);
      TlgWrite(v14, &unk_1804E2F6C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)((char *)this + 8));
}
