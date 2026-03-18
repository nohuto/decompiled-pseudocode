/*
 * XREFs of ?GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AC570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  return CRenderTargetBitmap::GetTransform(a1 + 152, a2, a3);
}
