/*
 * XREFs of ReportStatusToSCMgr @ 0x180052468
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800409F0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180050BA0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180052310 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180052390 (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180112560 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801126E0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801B84A4 = a1;
  dword_1801B84AC = a2;
  dword_1801B84B8 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801B84A8 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801B84B4 = 0;
  else
    dword_1801B84B4 = dword_1801B7688++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
