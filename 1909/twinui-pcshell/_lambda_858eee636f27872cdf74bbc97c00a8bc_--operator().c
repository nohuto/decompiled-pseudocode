/*
 * XREFs of _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x1802B2490
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___::Run @ 0x1802B29C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013FB90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18015AC88 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180160640 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801628D0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1802B21C4 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___ @ 0x1802B2358 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___.c)
 *     _lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator() @ 0x1802B27B8 (_lambda_9ec552b8631f150620dbdecd2ecc5d92_--operator().c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1802B28A0 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180427274 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // edi
  HRESULT v4; // eax
  const unsigned __int16 *v5; // rdx
  int v6; // r8d
  int IsAppBeingDebugged; // eax
  int *v8; // r8
  char *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *v12; // rsi
  int started; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  DWORD v16; // edx
  unsigned __int16 v18[2]; // [rsp+28h] [rbp-49h] BYREF
  int v19; // [rsp+2Ch] [rbp-45h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-41h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-39h] BYREF
  HANDLE hHandle; // [rsp+40h] [rbp-31h] BYREF
  GUID v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h] BYREF
  char v25; // [rsp+60h] [rbp-11h]
  _BYTE v26[24]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v27; // [rsp+80h] [rbp+Fh]
  void *v28; // [rsp+88h] [rbp+17h]
  GUID pguid; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v27 = -2LL;
  v24 = *(_QWORD *)(a1 + 8);
  v25 = 1;
  v2 = CoCreateGuid(&pguid);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_35;
  }
  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpsz,
    0LL);
  v4 = StringFromCLSID(&pguid, &lpsz);
  v3 = v4;
  if ( v4 >= 0 )
  {
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    IsAppBeingDebugged = CreateEventWithSDDL(lpsz, v5, v6, &hHandle);
    v3 = IsAppBeingDebugged;
    v9 = (char *)hHandle;
    if ( IsAppBeingDebugged < 0 )
    {
      v10 = 148LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged);
LABEL_31:
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v9);
      goto LABEL_33;
    }
    *(_DWORD *)v18 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v18,
                           v8);
    v3 = IsAppBeingDebugged;
    if ( IsAppBeingDebugged < 0 )
    {
      v10 = 150LL;
      goto LABEL_9;
    }
    v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    *(_QWORD *)&v23.Data1 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v28 = v12;
    if ( !v12 )
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_29;
    }
    v19 = 15000;
    v20 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v26, 0x3A98u);
    if ( *(_DWORD *)v18
      && (CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v26),
          *(_QWORD *)&v23.Data1 = v9,
          started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___(
                      v12,
                      *(HWND *)(a1 + 16),
                      &v23),
          v3 = started,
          started < 0) )
    {
      v14 = 169LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      started = CoreQueryWindowService(
                  *(_QWORD *)(a1 + 16),
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &v20);
      v3 = started;
      if ( started >= 0 )
      {
        v15 = *v20;
        v23 = pguid;
        started = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *))(v15 + 24))(v20, *(_QWORD *)(a1 + 16), &v23);
        v3 = started;
        if ( started >= 0 )
        {
          CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v26);
          v16 = v19;
          if ( *(_DWORD *)v18 )
            v16 = -1;
          if ( WaitForSingleObject(v9, v16) == 258 )
            ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((__int64)&v19);
          v3 = 0;
          goto LABEL_28;
        }
        v14 = 173LL;
      }
      else
      {
        v14 = 171LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)started);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v26);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_29:
    if ( v12 )
    {
      CCrashDetector::~CCrashDetector((CCrashDetector *)v12);
      operator delete(v12, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
    (const char *)(unsigned int)v4);
LABEL_33:
  if ( lpsz )
    CoTaskMemFree(lpsz);
LABEL_35:
  v25 = 0;
  lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator()(&v24);
  return v3;
}
