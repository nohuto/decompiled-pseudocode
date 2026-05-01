/*
 * XREFs of _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802C2E84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_795e02c192f463c18ca265aec6362396___::Run @ 0x1802C3610 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_795e02c192f463c18ca265aec6362396___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013FB90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18015AC88 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180160640 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801628D0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1802B21C4 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___ @ 0x1802B2358 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1802B28A0 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     _lambda_2d7367bc261f54741711c385e0ff6ead_::operator() @ 0x1802C2E18 (_lambda_2d7367bc261f54741711c385e0ff6ead_--operator().c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180427274 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_795e02c192f463c18ca265aec6362396_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  int *v7; // r8
  int IsAppBeingDebugged; // eax
  _QWORD *v9; // rax
  const char *v10; // r9
  void *v11; // rdi
  char *v12; // rbx
  int started; // eax
  __int64 *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  DWORD v18; // edx
  const char *v19; // r9
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v22[2]; // [rsp+24h] [rbp-94h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-90h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-88h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-80h] BYREF
  IID v26; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  char v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+60h] [rbp-58h]
  void *v30; // [rsp+68h] [rbp-50h]
  _BYTE v31[32]; // [rsp+70h] [rbp-48h] BYREF
  IID rclsid; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v29 = -2LL;
  v27 = *(_QWORD *)(a1 + 8);
  v28 = 1;
  v2 = CoCreateGuid(&rclsid);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2);
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpsz,
      0LL);
    v3 = StringFromCLSID(&rclsid, &lpsz);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        168LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v3);
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    v6 = CreateEventWithSDDL(lpsz, v4, v5, &hHandle);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        170LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6);
    *(_DWORD *)v22 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v22,
                           v7);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        172LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged);
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    *(_QWORD *)&v26.Data1 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v30 = v11;
    if ( !v11 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        174LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        v10);
    v21 = 15000;
    v23 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v31, 0x3A98u);
    if ( *(_DWORD *)v22 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v31);
      v12 = (char *)hHandle;
      *(_QWORD *)&v26.Data1 = hHandle;
      started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___(
                  v11,
                  *(HWND *)(a1 + 16),
                  &v26);
      if ( started >= 0 )
      {
LABEL_19:
        v14 = v23;
        v23 = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
        v15 = CoreQueryWindowService(
                *(_QWORD *)(a1 + 16),
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &v23);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            193LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v15);
        v16 = *v23;
        v26 = rclsid;
        v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IID *))(v16 + 24))(v23, *(_QWORD *)(a1 + 16), &v26);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            195LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v17);
        CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v31);
        v18 = v21;
        if ( *(_DWORD *)v22 )
          v18 = -1;
        if ( WaitForSingleObject(v12, v18) == 258 )
          ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((__int64)&v21);
        if ( v23 )
          (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
        CCrashDetector::~CCrashDetector((CCrashDetector *)v11);
        operator delete(v11, (const struct std::nothrow_t *)0x18);
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v12);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        v28 = 0;
        lambda_2d7367bc261f54741711c385e0ff6ead_::operator()((__int64)&v27);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        191LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)started);
    }
    v12 = (char *)hHandle;
    goto LABEL_19;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCC,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v19);
  }
  return result;
}
