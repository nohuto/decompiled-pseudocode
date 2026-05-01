/*
 * XREFs of _lambda_41ea728de8cee2282d4ec3314b3d541b_::operator() @ 0x18024D338
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41ea728de8cee2282d4ec3314b3d541b___::Run @ 0x18024DC00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41ea728de8cee2282d4ec3314b3d541b___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FAA4C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180113FAC (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18011910C (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18011B3F0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x18023CAF4 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_39295c937e63843bb23ada811bad7673___ @ 0x18023CC88 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_39295c937e63843bb23ada811bad7673___.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x18023D1D0 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     _lambda_ea5134318dd78e46e9831b9049231081_::operator() @ 0x18024D794 (_lambda_ea5134318dd78e46e9831b9049231081_--operator().c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1803A1F04 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_41ea728de8cee2282d4ec3314b3d541b_::operator()(__int64 a1)
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
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  DWORD v17; // edx
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v21[2]; // [rsp+24h] [rbp-94h] BYREF
  __int64 v22; // [rsp+28h] [rbp-90h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-88h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-80h] BYREF
  IID v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  char v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  void *v29; // [rsp+68h] [rbp-50h]
  _BYTE v30[32]; // [rsp+70h] [rbp-48h] BYREF
  IID rclsid; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v28 = -2LL;
  v26 = *(_QWORD *)(a1 + 8);
  v27 = 1;
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
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
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
    *(_DWORD *)v21 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v21,
                           v7);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        172LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged);
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    *(_QWORD *)&v25.Data1 = v9;
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
    v29 = v11;
    if ( !v11 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        174LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        v10);
    v20 = 15000;
    v22 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v30, 0x3A98u);
    if ( *(_DWORD *)v21 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v30);
      v12 = (char *)hHandle;
      *(_QWORD *)&v25.Data1 = hHandle;
      started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_39295c937e63843bb23ada811bad7673___(
                  v11,
                  *(HWND *)(a1 + 16),
                  &v25);
      if ( started >= 0 )
      {
LABEL_19:
        v14 = v22;
        v22 = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v15 = CoreQueryWindowService(
                *(_QWORD *)(a1 + 16),
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &v22);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            193LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v15);
        v25 = rclsid;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, IID *))(*(_QWORD *)v22 + 24LL))(
                v22,
                *(_QWORD *)(a1 + 16),
                &v25);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            195LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v16);
        CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v30);
        v17 = v20;
        if ( *(_DWORD *)v21 )
          v17 = -1;
        if ( WaitForSingleObject(v12, v17) == 258 )
          ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((__int64)&v20);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        CCrashDetector::~CCrashDetector((CCrashDetector *)v11);
        operator delete(v11, (const struct std::nothrow_t *)0x18);
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v12);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        v27 = 0;
        lambda_ea5134318dd78e46e9831b9049231081_::operator()(&v26);
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
                           v18);
  }
  return result;
}
