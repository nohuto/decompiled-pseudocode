/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00DC6E4
 * Callers:
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
 *     _SetCaretBlinkTime @ 0x1C00A5660 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x1C00DD820 (zzzSetCaretPos.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v3; // edi

  v3 = (int)a1;
  if ( !*((_QWORD *)a2 + 43)
    && *(_DWORD *)(gpsi + 4984LL) != -1
    && *(_DWORD *)UPDWORDPointer(8226LL)
    && ((*(_DWORD *)(gpsi + 2236LL) & 4) != 0 || !gProtocolType) )
  {
    *((_QWORD *)a2 + 43) = SetSystemTimer(v3, 0xFFFF, *(_DWORD *)(gpsi + 4984LL), (unsigned int)CaretBlinkProc, 0);
    if ( *(_DWORD *)(gpsi + 4984LL) )
      *((_DWORD *)a2 + 78) = *(_DWORD *)UPDWORDPointer(8226LL) / *(_DWORD *)(gpsi + 4984LL) + 1;
    else
      *((_DWORD *)a2 + 78) = -1;
  }
}
