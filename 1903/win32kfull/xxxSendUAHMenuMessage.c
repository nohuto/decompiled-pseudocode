/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C00F934C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(ULONG_PTR a1)
{
  return xxxSendMessage(a1);
}
