/*
 * XREFs of PhkFirstGlobalValid @ 0x1C0029E9C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C0029E40 (GetJournallingQueue.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0054F14 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00550BC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E83D0 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2 + 48);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid();
  return v2;
}
