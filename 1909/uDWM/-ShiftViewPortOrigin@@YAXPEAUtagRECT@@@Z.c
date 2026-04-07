/*
 * XREFs of ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18008C8F4
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000B444 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18008F8E4 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushPr.c)
 * Callees:
 *     <none>
 */

void __fastcall ShiftViewPortOrigin(struct tagRECT *a1)
{
  int v2; // ebx
  int SystemMetrics; // eax

  v2 = -GetSystemMetrics(77);
  SystemMetrics = GetSystemMetrics(76);
  OffsetRect(a1, -SystemMetrics, v2);
}
