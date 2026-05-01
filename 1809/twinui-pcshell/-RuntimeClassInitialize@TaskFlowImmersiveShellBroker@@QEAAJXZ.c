/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801AB01C
 * Callers:
 *     ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A694C (--$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  CImmersiveShellComponent *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  bool v8; // dl
  int v9; // eax
  int v10[2]; // [rsp+28h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-1Dh]
  unsigned int v12[2]; // [rsp+38h] [rbp-19h] BYREF
  const char *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  __int16 v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  __int128 v17; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h]
  __int128 v20; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+3Fh]
  __int64 v22; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v16 = -2LL;
  v17 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v18 = 0LL;
  v19 = 0LL;
  v1 = (TaskFlowImmersiveShellBroker *)((char *)this + 80);
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 80),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v17,
         1LL);
  if ( v4 < 0 )
  {
    v6 = 51LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  *(_QWORD *)v12 = retaddr;
  v13 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v14 = 0LL;
  v15 = 53;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v3, v2, v5);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v8);
  v20 = *(_OWORD *)&SID_TaskFlowUserActivityMonitor.Revision;
  v21 = 0LL;
  v22 = 0LL;
  v9 = CImmersiveShellComponent::RegisterServiceInformation(
         v1,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v20,
         1LL);
  v4 = v9;
  if ( v9 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v9);
  if ( v4 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v4,
      (__int64)v10,
      (struct wil::ThreadErrorContext *)0x867C75,
      (__int64)v12);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  if ( v4 < 0 )
  {
    v6 = 59LL;
    goto LABEL_3;
  }
  return 0LL;
}
