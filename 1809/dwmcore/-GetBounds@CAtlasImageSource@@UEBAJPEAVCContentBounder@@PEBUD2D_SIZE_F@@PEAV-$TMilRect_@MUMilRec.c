/*
 * XREFs of ?GetBounds@CAtlasImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180222720
 * Callers:
 *     <none>
 * Callees:
 *     ?DoGetTransform@CAtlasImageSource@@AEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022267C (-DoGetTransform@CAtlasImageSource@@AEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 */

__int64 __fastcall CAtlasImageSource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v6 = 0;
  CAtlasImageSource::DoGetTransform(a1 - 16, (__int64)v5, a4);
  return 0LL;
}
