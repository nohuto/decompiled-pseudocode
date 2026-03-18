/*
 * XREFs of PhkFirstGlobalValid @ 0x1C00B189C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C00B1840 (GetJournallingQueue.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00B586C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01D394C (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8LL * a2 + 48);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid();
  return v2;
}
