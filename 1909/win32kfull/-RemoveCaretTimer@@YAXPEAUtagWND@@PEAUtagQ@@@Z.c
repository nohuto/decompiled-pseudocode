/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA3E4
 * Callers:
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x1C00887F0 (_SetCaretBlinkTime.c)
 *     CaretBlinkProc @ 0x1C00E9AA0 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00E9CE0 (zzzSetCaretPos.c)
 * Callees:
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 44) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 44) = 0LL;
  }
}
