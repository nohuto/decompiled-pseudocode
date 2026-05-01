/*
 * XREFs of ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A8BAC
 * Callers:
 *     ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1801A9F60 (-GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManag.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v3);
  }
  return result;
}
