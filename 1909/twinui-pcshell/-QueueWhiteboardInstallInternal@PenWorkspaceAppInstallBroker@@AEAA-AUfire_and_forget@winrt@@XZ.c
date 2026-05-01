/*
 * XREFs of ?QueueWhiteboardInstallInternal@PenWorkspaceAppInstallBroker@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800A3C30
 * Callers:
 *     ?QueueWhiteboardAppInstall@PenWorkspaceAppInstallBroker@@UEAAJXZ @ 0x1800A2760 (-QueueWhiteboardAppInstall@PenWorkspaceAppInstallBroker@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800A27C4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v6; // [rsp+258h] [rbp+10h] BYREF

  v4 = operator new(0x218uLL);
  v6 = 0;
  PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__InitCoro_1(&v6, v4, a2, a1);
  return a2;
}
