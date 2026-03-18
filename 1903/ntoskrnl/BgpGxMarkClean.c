/*
 * XREFs of BgpGxMarkClean @ 0x14013D77C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x14098E904 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140994580 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
