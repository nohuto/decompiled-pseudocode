/*
 * XREFs of xxxValidateRect @ 0x1C01063F4
 * Callers:
 *     xxxMoveWindow @ 0x1C00ED66C (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C01062C0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, __int64 a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
