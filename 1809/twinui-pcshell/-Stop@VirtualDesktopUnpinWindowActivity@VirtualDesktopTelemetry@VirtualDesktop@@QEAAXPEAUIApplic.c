/*
 * XREFs of ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180393CB0
 * Callers:
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180395390 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
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

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rsi
  const struct _TlgProvider_t *v8; // rbx
  const WCHAR *v9; // rcx
  const WCHAR *v10; // rax
  const struct _TlgProvider_t *v11; // rbx
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  _BYTE v25[24]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-70h] BYREF
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  _BYTE *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  __int64 v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v41; // [rsp+158h] [rbp+50h]
  __int64 v42; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+168h] [rbp+60h] BYREF
  DWORD *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+188h] [rbp+80h] BYREF
  int *v47; // [rsp+198h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1B8h] [rbp+B0h] BYREF
  WINBOOL *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v55; // [rsp+1F8h] [rbp+F0h]
  __int64 v56; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+208h] [rbp+100h] BYREF

  v24 = -2LL;
  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v25);
  pszPath = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v22 = -1LL;
  v23 = -1LL;
  (*(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, &pszPath);
  v5 = *((_QWORD *)this + 6);
  v6 = *(_DWORD *)(v5 + 76);
  if ( v6 < 0 && v6 == *(_DWORD *)(v5 + 84) )
    v7 = v5 + 80;
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
      v19 = *(_DWORD *)(v7 + 4);
      v35 = &v19;
      v36 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v7 + 48));
      v38 = v7 + 56;
      v39 = 4LL;
      TlgCreateSz(&v40, *(LPCSTR *)(v7 + 120));
      LODWORD(v20) = *(_DWORD *)v7;
      v41 = &v20;
      v42 = 4LL;
      TlgCreateWsz(&v43, *(LPCWSTR *)(v7 + 16));
      CurrentThreadId = *(_DWORD *)(v7 + 24);
      v44 = &CurrentThreadId;
      v45 = 4LL;
      TlgCreateSz(&v46, *(LPCSTR *)(v7 + 64));
      v15 = *(_DWORD *)(v7 + 72);
      v47 = &v15;
      v48 = 4LL;
      TlgCreateSz(&v49, *(LPCSTR *)(v7 + 80));
      TlgCreateWsz(&v50, *(LPCWSTR *)(v7 + 88));
      v16[0] = *(_DWORD *)(v7 + 96);
      v51 = v16;
      v52 = 4LL;
      TlgCreateSz(&v53, *(LPCSTR *)(v7 + 104));
      TlgCreateWsz(&v54, *(LPCWSTR *)(v7 + 112));
      v55 = v25;
      v56 = 16LL;
      v9 = &word_180411F30;
      if ( pszPath )
        v9 = pszPath;
      v10 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v9);
      TlgCreateWsz(&v57, v10);
      TlgWrite(v8, &unk_1804693BC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v16, &Context) && v16[0] )
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
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v27 = &v15;
      v28 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v30 = 4LL;
      v31 = v25;
      v32 = 16LL;
      v12 = &word_180411F30;
      if ( pszPath )
        v12 = pszPath;
      v13 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v12);
      TlgCreateWsz(&v33, v13);
      TlgWrite(v11, &unk_18046965B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
