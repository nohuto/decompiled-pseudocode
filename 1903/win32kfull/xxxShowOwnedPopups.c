/*
 * XREFs of xxxShowOwnedPopups @ 0x1C015DDB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 */

__int64 __fastcall xxxShowOwnedPopups(__int64 a1, int a2)
{
  xxxShowOwnedWindows(a1, a2 != 0 ? 3 : 1, 0LL);
  return 1LL;
}
