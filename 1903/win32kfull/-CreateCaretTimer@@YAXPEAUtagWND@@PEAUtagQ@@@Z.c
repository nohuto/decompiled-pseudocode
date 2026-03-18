/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6E4
 * Callers:
 *     zzzSetCaretPos @ 0x1C00889E0 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C0088F80 (_SetCaretBlinkTime.c)
 *     zzzInternalShowCaret @ 0x1C008B40C (zzzInternalShowCaret.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v3; // edi

  v3 = (int)a1;
  if ( !*((_QWORD *)a2 + 44)
    && *(_DWORD *)(gpsi + 4984LL) != -1
    && *(_DWORD *)UPDWORDPointer(8226LL)
    && ((*(_DWORD *)(gpsi + 2236LL) & 4) != 0 || !gProtocolType) )
  {
    *((_QWORD *)a2 + 44) = SetSystemTimer(v3, 0xFFFF, *(_DWORD *)(gpsi + 4984LL), (unsigned int)CaretBlinkProc, 0);
    if ( *(_DWORD *)(gpsi + 4984LL) )
      *((_DWORD *)a2 + 80) = *(_DWORD *)UPDWORDPointer(8226LL) / *(_DWORD *)(gpsi + 4984LL) + 1;
    else
      *((_DWORD *)a2 + 80) = -1;
  }
}
