/*
 * XREFs of ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800563A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_dd556f8d7e16306f6186687681faffc7_::operator() @ 0x180056478 (_lambda_dd556f8d7e16306f6186687681faffc7_--operator().c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 TaskFlowImmersiveShellBroker::SessionDisposed(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // eax
  int v4; // ebx
  int v6[2]; // [rsp+30h] [rbp-41h] BYREF
  int v7; // [rsp+3Ch] [rbp-35h]
  unsigned int v8[2]; // [rsp+40h] [rbp-31h] BYREF
  const char *v9; // [rsp+48h] [rbp-29h]
  __int64 v10; // [rsp+50h] [rbp-21h]
  __int16 v11; // [rsp+58h] [rbp-19h]
  _QWORD v12[9]; // [rsp+60h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+3Fh]
  __int64 v14; // [rsp+C0h] [rbp+4Fh] BYREF
  __int64 v15; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+5Fh]
  __int64 v17; // [rsp+D8h] [rbp+67h] BYREF
  va_list va1; // [rsp+D8h] [rbp+67h]
  __int64 v19; // [rsp+E0h] [rbp+6Fh]
  __int64 v20; // [rsp+E8h] [rbp+77h] BYREF
  va_list va2; // [rsp+E8h] [rbp+77h]
  va_list va3; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v14 = a2;
  v12[0] = a1;
  v12[1] = &v14;
  v12[2] = a3;
  va_copy((va_list)&v12[3], va);
  va_copy((va_list)&v12[4], va1);
  v12[5] = v19;
  va_copy((va_list)&v12[6], va2);
  va_copy((va_list)&v12[7], va3);
  *(_QWORD *)v8 = retaddr;
  v9 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v10 = 0LL;
  v11 = 425;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService();
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v6);
  v3 = lambda_dd556f8d7e16306f6186687681faffc7_::operator()(v12);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v3,
      (int)v6,
      (struct wil::ThreadErrorContext *)0x867C75,
      (unsigned int)v8,
      (const struct DiagnosticsInfo *)0xFFFFFFFFFFFFFFFELL);
  if ( *(_QWORD *)v6 )
    *(_DWORD *)(*(_QWORD *)v6 + 16LL) = v7;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BE,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
