/*
 * XREFs of ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800565A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_1bf264e3837c966d4f3511d8e1ed533c_::operator() @ 0x1800566D0 (_lambda_1bf264e3837c966d4f3511d8e1ed533c_--operator().c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800599A0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A965C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 TaskFlowImmersiveShellBroker::SessionCreated(__int64 a1, __int64 a2, __int64 a3, ...)
{
  wil::details_abi *v3; // rcx
  bool v4; // dl
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v6; // rbx
  int v7; // eax
  int v8; // edi
  struct DiagnosticsInfo *v10; // [rsp+20h] [rbp-79h]
  int v11[2]; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+40h] [rbp-59h]
  int v13; // [rsp+44h] [rbp-55h]
  unsigned int v14[2]; // [rsp+48h] [rbp-51h] BYREF
  const char *v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  __int16 v17; // [rsp+60h] [rbp-39h]
  _QWORD v18[13]; // [rsp+68h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]
  int v20; // [rsp+E0h] [rbp+47h] BYREF
  __int16 v21; // [rsp+E4h] [rbp+4Bh]
  __int64 v22; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v23; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+5Fh]
  __int64 v25; // [rsp+100h] [rbp+67h] BYREF
  va_list va1; // [rsp+100h] [rbp+67h]
  __int64 v27; // [rsp+108h] [rbp+6Fh]
  __int64 v28; // [rsp+110h] [rbp+77h] BYREF
  va_list va2; // [rsp+110h] [rbp+77h]
  va_list va3; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  v22 = a2;
  v18[0] = a1;
  v18[1] = &v22;
  v18[2] = a3;
  va_copy((va_list)&v18[3], va);
  va_copy((va_list)&v18[4], va1);
  v18[5] = v27;
  va_copy((va_list)&v18[6], va2);
  va_copy((va_list)&v18[7], va3);
  *(_QWORD *)v14 = retaddr;
  v15 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v16 = 0LL;
  v17 = 390;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LODWORD(v27) = 4;
  BYTE4(v27) = 3;
  v20 = 4;
  v21 = WORD2(v27);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    8813685LL,
    &v20,
    1LL,
    3);
  LOBYTE(v3) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3, v4);
  v6 = ThreadLocalDataCache;
  *(_QWORD *)v11 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v13 = *((_DWORD *)ThreadLocalDataCache + 4);
    v12 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v12;
    v6 = *(struct wil::details_abi::ThreadLocalData **)v11;
  }
  v7 = lambda_1bf264e3837c966d4f3511d8e1ed533c_::operator()(v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (int)v11,
      (struct wil::ThreadErrorContext *)0x867C75,
      (unsigned int)v14,
      v10);
    v6 = *(struct wil::details_abi::ThreadLocalData **)v11;
  }
  if ( v6 )
    *((_DWORD *)v6 + 4) = v13;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19B,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
