/*
 * XREFs of ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180055690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetFileActivityListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **); // rcx
  int v5; // eax
  int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+2Ch] [rbp-2Ch]
  _QWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v11; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10[2] = 0LL;
  *a2 = 0LL;
  v10[0] = retaddr;
  v10[1] = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v11 = 314;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService();
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v8);
  if ( *((_DWORD *)this + 46) == 1 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **))*((_QWORD *)this + 27);
    if ( v4 && (v5 = (**v4)(v4, &GUID_6405dff2_9eee_41c0_885e_034873207439, a2), v6 = v5, v5 < 0) )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    else
      v6 = 0;
    if ( v6 >= 0 )
      goto LABEL_6;
  }
  else
  {
    v6 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
  }
  wil::details::ReportFeatureError(
    (wil::details *)(unsigned int)v6,
    (int)v8,
    (struct wil::ThreadErrorContext *)0x867C75,
    (unsigned int)v10,
    *(const struct DiagnosticsInfo **)v8);
LABEL_6:
  if ( *(_QWORD *)v8 )
    *(_DWORD *)(*(_QWORD *)v8 + 16LL) = v9;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x144,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
