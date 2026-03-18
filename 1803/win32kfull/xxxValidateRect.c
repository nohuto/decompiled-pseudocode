/*
 * XREFs of xxxValidateRect @ 0x1C01031D0
 * Callers:
 *     xxxMoveWindow @ 0x1C00F21C8 (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C01030D0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
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
