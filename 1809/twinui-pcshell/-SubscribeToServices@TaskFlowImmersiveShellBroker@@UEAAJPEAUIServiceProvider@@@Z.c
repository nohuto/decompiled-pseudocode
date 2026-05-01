/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ABCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801AAEFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  bool v3; // di
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\TaskFlowDataEngine", 0, 0x20019u, &hKey) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v3 )
  {
    v4 = TaskFlowImmersiveShellBroker::ReinitializeObjects((TaskFlowImmersiveShellBroker *)((char *)this - 80));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        180LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    *((_DWORD *)this + 30) = 1;
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowAFCIndexer>::ReportUsageToService(v6, v5, v7);
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v9, v8, v10);
  }
  return 0LL;
}
