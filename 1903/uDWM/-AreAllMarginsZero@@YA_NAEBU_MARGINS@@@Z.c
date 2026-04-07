/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180028014
 * Callers:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001D7A0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x180027F10 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreAllMarginsZero(const struct _MARGINS *a1)
{
  bool result; // al

  result = 0;
  if ( !a1->cxLeftWidth && !a1->cyTopHeight && !a1->cxRightWidth )
    return a1->cyBottomHeight == 0;
  return result;
}
