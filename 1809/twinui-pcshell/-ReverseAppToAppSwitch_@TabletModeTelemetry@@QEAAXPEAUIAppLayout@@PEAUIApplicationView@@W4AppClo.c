/*
 * XREFs of ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x18034A024
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803435A4 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 */

__int64 __fastcall TabletModeTelemetry::ReverseAppToAppSwitch_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // eax
  bool v8; // r14
  const struct _TlgProvider_t *v9; // rbx
  const WCHAR *v10; // rcx
  const WCHAR *v11; // rax
  bool v13; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-65h] BYREF
  int v15; // [rsp+38h] [rbp-61h] BYREF
  int v16; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  LPCWSTR pszPath; // [rsp+50h] [rbp-49h] BYREF
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int64 v21; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  bool *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  int *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  int *v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C8h] [rbp+2Fh]
  int v32; // [rsp+CCh] [rbp+33h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v18 = 0LL;
  v16 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v8 = (*(int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 152LL))(a2, a3, &v18, 0LL) >= 0;
  pszPath = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v20 = -1LL;
  v21 = -1LL;
  (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 136LL))(a3, &pszPath);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    v10 = &word_180411F30;
    if ( pszPath )
      v10 = pszPath;
    v11 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v10);
    TlgCreateWsz(&pDesc, v11);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = &v13;
    v27 = &v15;
    v30 = &v16;
    v13 = v8;
    v25 = 1;
    v15 = a4;
    v28 = 4;
    v31 = 4;
    TlgWrite(v9, &unk_1804665B5, 0LL, 0LL, 6u, &pData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
}
