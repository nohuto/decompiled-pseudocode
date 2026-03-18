/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01352D8
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7E0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1C00FF9B0 (NtUserGetClipboardData.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0135350 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C013386C (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0137014 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(__int64 **a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(a1[52])
      || gpqForeground
      && (a1[53] == (__int64 *)gpqForeground
       || (*((_DWORD *)a1[52] + 3) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2));
}
