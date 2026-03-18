/*
 * XREFs of PhkFirstGlobalValid @ 0x1C0023A2C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C00239D0 (GetJournallingQueue.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B41A4 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00B434C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E8550 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2 + 48);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid();
  return v2;
}
