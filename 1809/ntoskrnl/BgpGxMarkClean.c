/*
 * XREFs of BgpGxMarkClean @ 0x14013BB88
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x14094E8EC (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140954458 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
