/*
 * XREFs of PhkFirstGlobalValid @ 0x1C000F7EC
 * Callers:
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C000F790 (GetJournallingQueue.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D7CAC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01B0924 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * (a2 + 1) + 40);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid(v2);
  return v2;
}
