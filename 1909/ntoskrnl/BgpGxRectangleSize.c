/*
 * XREFs of BgpGxRectangleSize @ 0x140178B84
 * Callers:
 *     AnFwConfigureProgressResources @ 0x14098E6E4 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x14098E7CC (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
