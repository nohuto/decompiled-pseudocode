/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6A0
 * Callers:
 *     zzzSetCaretPos @ 0x1C00889E0 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C0088F80 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C012D520 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 44) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 44) = 0LL;
  }
}
