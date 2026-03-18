/*
 * XREFs of InForegroundQueue @ 0x1C00D7FE0
 * Callers:
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00D8060 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     NtUserGetClipboardData @ 0x1C00DCA10 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0212200 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00D7D60 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00D8CF8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(__int64 **a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(a1[53])
      || gpqForeground
      && (a1[54] == (__int64 *)gpqForeground
       || (*((_DWORD *)a1[53] + 3) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2));
}
