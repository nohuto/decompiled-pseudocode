/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00DDDB4
 * Callers:
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x1C00A5660 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x1C00DD820 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C00DE8D0 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
