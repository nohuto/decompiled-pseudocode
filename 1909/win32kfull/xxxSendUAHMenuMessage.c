/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C0128BAC
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00FBBBC (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0249F5C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(ULONG_PTR a1)
{
  return xxxSendMessage(a1);
}
