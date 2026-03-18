/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C00A7340
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(ULONG_PTR a1)
{
  return xxxSendMessage(a1);
}
