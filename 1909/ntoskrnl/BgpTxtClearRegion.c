/*
 * XREFs of BgpTxtClearRegion @ 0x140994698
 * Callers:
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140178D30 (BgpGxDrawRectangle.c)
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return BgpGxDrawRectangle(*(_BYTE **)(a1 + 24), a1);
  else
    return 3221225485LL;
}
