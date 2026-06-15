/*
 * XREFs of ReportStatusToSCMgr @ 0x180060B78
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180044EE0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x1800607F0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180060A20 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180060AA0 (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180112060 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801121E0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801B74A4 = a1;
  dword_1801B74AC = a2;
  dword_1801B74B8 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801B74A8 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801B74B4 = 0;
  else
    dword_1801B74B4 = dword_1801B6688++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
