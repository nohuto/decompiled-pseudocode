/*
 * XREFs of _lambda_5628bd74a8815c20418001cca1cbd131_::operator() @ 0x18005EF04
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2184967cc0ced9bc67ffed8f6d62731f___::Run @ 0x18005EE90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2184967cc0ced9bc67ffed8f6d62731f___--Run.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800599A0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E62E0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

void __fastcall lambda_5628bd74a8815c20418001cca1cbd131_::operator()(unsigned int *a1)
{
  __int64 v2; // rsi
  wil::details_abi *v3; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v5; // rbx
  __int64 v6; // rcx
  char v7; // al
  const char *v8; // r9
  int LastError; // eax
  struct DiagnosticsInfo *v10; // [rsp+20h] [rbp-59h]
  __int16 v11; // [rsp+34h] [rbp-45h]
  int v12; // [rsp+38h] [rbp-41h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-3Dh]
  int v14; // [rsp+40h] [rbp-39h] BYREF
  __int16 v15; // [rsp+44h] [rbp-35h]
  int v16[2]; // [rsp+48h] [rbp-31h] BYREF
  int v17; // [rsp+50h] [rbp-29h]
  int v18; // [rsp+54h] [rbp-25h]
  int v19; // [rsp+58h] [rbp-21h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  unsigned int v22[2]; // [rsp+70h] [rbp-9h] BYREF
  const char *v23; // [rsp+78h] [rbp-1h]
  __int64 v24; // [rsp+80h] [rbp+7h]
  __int16 v25; // [rsp+88h] [rbp+Fh]
  _QWORD v26[2]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 6) + 120LL) + 112LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 6) + 120LL),
    *a1,
    a1[1]);
  v2 = *((_QWORD *)a1 + 6);
  *(_QWORD *)v22 = retaddr;
  v25 = 1265;
  v23 = "pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp";
  v24 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 3;
  v12 = 3;
  v13 = v11;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetFeaturePropertyCache'::`2'::data,
    15343832LL,
    &v12,
    1LL,
    3);
  LOBYTE(v3) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3);
  *(_QWORD *)v16 = ThreadLocalDataCache;
  v5 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v18 = *((_DWORD *)ThreadLocalDataCache + 4);
    v5 = *(struct wil::details_abi::ThreadLocalData **)v16;
    v17 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v17;
  }
  v6 = *(_QWORD *)(v2 + 128);
  v19 = 19;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v7 = a1[1] & 0x20;
  v21 = 16;
  v26[0] = v7 != 0 ? 5 : 0;
  v20 = v26;
  if ( (unsigned int)SetWindowCompositionAttribute(v6, &v19) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x501,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                  v8);
  if ( LastError < 0 )
  {
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)LastError,
      (int)v16,
      (struct wil::ThreadErrorContext *)0xEA20D8,
      (unsigned int)v22,
      v10);
    v5 = *(struct wil::details_abi::ThreadLocalData **)v16;
  }
  if ( v5 )
    *((_DWORD *)v5 + 4) = v18;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 1;
  v14 = 0;
  v15 = v11;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
    10727725LL,
    &v14,
    0LL,
    3);
  if ( *((_BYTE *)a1 + 40) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 6) + 128LL),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
