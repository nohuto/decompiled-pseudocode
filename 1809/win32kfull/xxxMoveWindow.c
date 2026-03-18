/*
 * XREFs of xxxMoveWindow @ 0x1C010B090
 * Callers:
 *     NtUserMoveWindow @ 0x1C010AEE0 (NtUserMoveWindow.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     xxxValidateRect @ 0x1C00C71EC (xxxValidateRect.c)
 */

__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v11; // edi

  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) != 0
    || *((_QWORD *)a1 + 10) != GetDesktopWindow((__int64)a1) )
  {
    return xxxSetWindowPos(a1, 0LL, v7, v8, v9, a5, a6 != 0 ? 20 : 28);
  }
  v11 = xxxSetWindowPos(a1, 0LL, v7, v8, v9, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1);
  return v11;
}
