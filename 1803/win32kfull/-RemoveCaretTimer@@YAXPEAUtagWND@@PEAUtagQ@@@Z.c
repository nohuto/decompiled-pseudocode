/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00648A4
 * Callers:
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0063880 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0063DD0 (CaretBlinkProc.c)
 *     _SetCaretBlinkTime @ 0x1C006A750 (_SetCaretBlinkTime.c)
 * Callees:
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
