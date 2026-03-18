/*
 * XREFs of InForegroundQueue @ 0x1C006DBF0
 * Callers:
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C006DAE0 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     NtUserGetClipboardData @ 0x1C00B5C90 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01EC190 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C006BBD8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     IsDebuggerAttached @ 0x1C006DFB4 (IsDebuggerAttached.c)
 */

__int64 __fastcall InForegroundQueue(struct tagTHREADINFO *a1, int a2)
{
  unsigned int v4; // r11d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 52)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 53) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 52) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v4) = ForegroundInputOwnerMatch(a1, a2);
      return v4;
    }
    return 1LL;
  }
  return 0LL;
}
