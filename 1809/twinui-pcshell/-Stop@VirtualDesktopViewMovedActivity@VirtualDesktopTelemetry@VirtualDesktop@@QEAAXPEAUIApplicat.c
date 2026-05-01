/*
 * XREFs of ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803888A0
 * Callers:
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803867B0 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180386890 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
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
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  const struct _TlgProvider_t *v9; // rdi
  const WCHAR *v10; // rcx
  const WCHAR *v11; // rax
  const struct _TlgProvider_t *v12; // rdi
  const WCHAR *v13; // rcx
  const WCHAR *v14; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  _BYTE v26[24]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+98h] [rbp-70h] BYREF
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  _BYTE *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  __int64 v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+168h] [rbp+60h] BYREF
  DWORD *v45; // [rsp+178h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+188h] [rbp+80h] BYREF
  int *v48; // [rsp+198h] [rbp+90h]
  __int64 v49; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1B8h] [rbp+B0h] BYREF
  WINBOOL *v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v56; // [rsp+1F8h] [rbp+F0h]
  __int64 v57; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+208h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v25 = -2LL;
  pszPath = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v26);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      77LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v23 = -1LL;
  v24 = -1LL;
  (*(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, &pszPath);
  v6 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 76);
  if ( v7 < 0 && v7 == *(_DWORD *)(v6 + 84) )
    v8 = v6 + 80;
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
      v20 = *(_DWORD *)(v8 + 4);
      v36 = &v20;
      v37 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v8 + 48));
      v39 = v8 + 56;
      v40 = 4LL;
      TlgCreateSz(&v41, *(LPCSTR *)(v8 + 120));
      LODWORD(v21) = *(_DWORD *)v8;
      v42 = &v21;
      v43 = 4LL;
      TlgCreateWsz(&v44, *(LPCWSTR *)(v8 + 16));
      CurrentThreadId = *(_DWORD *)(v8 + 24);
      v45 = &CurrentThreadId;
      v46 = 4LL;
      TlgCreateSz(&v47, *(LPCSTR *)(v8 + 64));
      v16 = *(_DWORD *)(v8 + 72);
      v48 = &v16;
      v49 = 4LL;
      TlgCreateSz(&v50, *(LPCSTR *)(v8 + 80));
      TlgCreateWsz(&v51, *(LPCWSTR *)(v8 + 88));
      v17[0] = *(_DWORD *)(v8 + 96);
      v52 = v17;
      v53 = 4LL;
      TlgCreateSz(&v54, *(LPCSTR *)(v8 + 104));
      TlgCreateWsz(&v55, *(LPCWSTR *)(v8 + 112));
      v56 = v26;
      v57 = 16LL;
      v10 = &word_180411F30;
      if ( pszPath )
        v10 = pszPath;
      v11 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v10);
      TlgCreateWsz(&v58, v11);
      TlgWrite(v9, &unk_180468DF8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v17, &Context) && v17[0] )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v16;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v31 = 4LL;
      v32 = v26;
      v33 = 16LL;
      v13 = &word_180411F30;
      if ( pszPath )
        v13 = pszPath;
      v14 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v13);
      TlgCreateWsz(&v34, v14);
      TlgWrite(v12, &unk_180468D8D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
