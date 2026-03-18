/*
 * XREFs of ?GetTransform@CAtlasImageSource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180222830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CAtlasImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasImageSource::DoGetTransform(a1 - 24, a2, a3);
}
