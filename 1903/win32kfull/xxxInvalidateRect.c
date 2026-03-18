/*
 * XREFs of xxxInvalidateRect @ 0x1C0221780
 * Callers:
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02416F0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v3; // r9

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181LL;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
