/*
 * XREFs of xxxInvalidateRect @ 0x1C0221240
 * Callers:
 *     xxxMNSetTop @ 0x1C02268C4 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02410D0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, __int64 a2, int a3)
{
  int v3; // r9d

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
