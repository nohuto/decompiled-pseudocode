/*
 * XREFs of xxxValidateRect @ 0x1C012B424
 * Callers:
 *     xxxMoveWindow @ 0x1C0112A4C (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C012B2F0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r9

  if ( a1 )
  {
    v2 = 8LL;
  }
  else
  {
    a2 = 0LL;
    v2 = 645LL;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
