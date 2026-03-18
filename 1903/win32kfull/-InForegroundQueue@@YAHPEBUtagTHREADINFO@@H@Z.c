/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0127258
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1C0125AC0 (NtUserGetClipboardData.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0127140 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0017AC8 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01272CC (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 52))
      || gpqForeground
      && (*((_QWORD *)a1 + 53) == gpqForeground
       || (*(_DWORD *)(*((_QWORD *)a1 + 52) + 12LL) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch(a1, a2));
}
