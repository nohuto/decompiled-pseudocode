/*
 * XREFs of BgpGxMarkClean @ 0x14013BC88
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x14094F8EC (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140955458 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
