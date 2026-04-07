/*
 * XREFs of ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18008CC54
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180029834 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18008FC44 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushPr.c)
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
