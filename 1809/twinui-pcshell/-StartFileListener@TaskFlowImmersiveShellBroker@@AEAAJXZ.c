/*
 * XREFs of ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801ABA44
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_ae05919e28de01530209de16bef4b1de_::operator() @ 0x1801A7AB4 (_lambda_ae05919e28de01530209de16bef4b1de_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::StartFileListener(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        __int64 a3)
{
  bool v3; // dl
  int v4; // eax
  int v5; // ebx
  int v7[2]; // [rsp+28h] [rbp-40h] BYREF
  int v8; // [rsp+34h] [rbp-34h]
  _QWORD v9[3]; // [rsp+38h] [rbp-30h] BYREF
  __int16 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  TaskFlowImmersiveShellBroker *v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = this;
  v9[0] = retaddr;
  v9[1] = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v9[2] = 0LL;
  v10 = 562;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
    (__int64)this,
    a2,
    a3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v7, v3);
  v4 = lambda_ae05919e28de01530209de16bef4b1de_::operator()((__int64 *)&v12);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v4,
      (__int64)v7,
      (struct wil::ThreadErrorContext *)0x867C75,
      (__int64)v9);
  if ( *(_QWORD *)v7 )
    *(_DWORD *)(*(_QWORD *)v7 + 16LL) = v8;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x243,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
