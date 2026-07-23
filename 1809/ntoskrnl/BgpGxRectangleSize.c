/*
 * XREFs of BgpGxRectangleSize @ 0x14016EDD4
 * Callers:
 *     AnFwConfigureProgressResources @ 0x14094F6DC (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x14094F7BC (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
