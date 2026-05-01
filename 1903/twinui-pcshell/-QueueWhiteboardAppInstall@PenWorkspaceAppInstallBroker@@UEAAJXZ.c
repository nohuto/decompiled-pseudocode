/*
 * XREFs of ?QueueWhiteboardAppInstall@PenWorkspaceAppInstallBroker@@UEAAJXZ @ 0x180095570
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWhiteboardInstallInternal@PenWorkspaceAppInstallBroker@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180096A40 (-QueueWhiteboardInstallInternal@PenWorkspaceAppInstallBroker@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardAppInstall(PenWorkspaceAppInstallBroker *this)
{
  char *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (char *)this - 48;
  try
  {
    PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57,
                           (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\appinstallbroker.cpp",
                           v2);
  }
  return result;
}
