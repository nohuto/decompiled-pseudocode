/*
 * XREFs of ReportStatusToSCMgr @ 0x180051CD0
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180012400 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ServiceStart @ 0x180051BF8 (ServiceStart.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180051DE0 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180052280 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x1801047E0 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x180104960 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801B342C = a1;
  dword_1801B3434 = a2;
  dword_1801B3440 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801B3430 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801B343C = 0;
  else
    dword_1801B343C = dword_1801B2618++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
