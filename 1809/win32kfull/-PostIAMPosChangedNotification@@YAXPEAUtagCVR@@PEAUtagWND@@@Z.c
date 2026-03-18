/*
 * XREFs of ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00386A8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostIAMPosChangedNotification(struct tagCVR *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 8) & 0x10000) != 0 && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 31LL, *(_QWORD *)a1);
}
