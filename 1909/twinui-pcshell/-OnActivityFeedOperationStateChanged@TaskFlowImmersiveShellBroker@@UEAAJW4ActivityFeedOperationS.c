/*
 * XREFs of ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x180213140
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180213B6C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::OnActivityFeedOperationStateChanged(__int64 a1)
{
  TaskFlowImmersiveShellBroker *v1; // rcx
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (TaskFlowImmersiveShellBroker *)(a1 - 144);
  try
  {
    v2 = TaskFlowImmersiveShellBroker::ReinitializeObjects(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x205,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x208,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v3);
  }
  return result;
}
