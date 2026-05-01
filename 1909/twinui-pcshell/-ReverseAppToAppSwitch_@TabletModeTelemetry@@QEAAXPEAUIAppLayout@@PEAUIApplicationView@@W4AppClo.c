/*
 * XREFs of ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x1803CF0A8
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803C8444 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803C9BE4 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 */

__int64 __fastcall TabletModeTelemetry::ReverseAppToAppSwitch_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // eax
  bool v8; // r14
  __int64 v9; // rcx
  wil::TraceLoggingProvider *v10; // rax
  _QWORD *v11; // rcx
  const struct _TlgProvider_t *v12; // rbx
  const WCHAR *v13; // rcx
  const WCHAR *v14; // rax
  bool v16; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-65h] BYREF
  int v18; // [rsp+38h] [rbp-61h] BYREF
  int v19; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  LPCWSTR pszPath; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  __int64 v24; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  bool *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]
  int *v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+BCh] [rbp+23h]
  int *v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+CCh] [rbp+33h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v21 = 0LL;
  v19 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v8 = (*(int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 152LL))(a2, a3, &v21, 0LL) >= 0;
  pszPath = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v23 = -1LL;
  v24 = -1LL;
  (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 136LL))(a3, &pszPath);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_1805C2098;
    v10 = (wil::TraceLoggingProvider *)operator new(v9, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v10);
    *v11 = &ImmersiveIconsLogging::`vftable';
    v11[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    v13 = &szAgent;
    if ( pszPath )
      v13 = pszPath;
    v14 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v13);
    TlgCreateWsz(&pDesc, v14);
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v16;
    v30 = &v18;
    v33 = &v19;
    v16 = v8;
    v28 = 1;
    v18 = a4;
    v31 = 4;
    v34 = 4;
    TlgWrite(v12, &unk_180505B71, 0LL, 0LL, 6u, &pData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
}
