/*
 * XREFs of ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CDDC4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostIAMPosChangedNotification(struct tagCVR *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 8) & 0x10000) != 0 && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x1Fu, *(_QWORD *)a1);
}
