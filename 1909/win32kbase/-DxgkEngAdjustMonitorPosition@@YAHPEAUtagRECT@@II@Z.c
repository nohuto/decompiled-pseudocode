/*
 * XREFs of ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x1C0044120
 * Callers:
 *     <none>
 * Callees:
 *     AlignRects @ 0x1C0044134 (AlignRects.c)
 */

__int64 __fastcall DxgkEngAdjustMonitorPosition(struct tagRECT *a1, unsigned int a2)
{
  return AlignRects(a1, a2);
}
