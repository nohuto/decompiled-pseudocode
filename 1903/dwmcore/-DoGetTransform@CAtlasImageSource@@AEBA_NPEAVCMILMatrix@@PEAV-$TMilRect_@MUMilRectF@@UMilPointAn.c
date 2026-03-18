/*
 * XREFs of ?DoGetTransform@CAtlasImageSource@@AEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025288C
 * Callers:
 *     ?GetBounds@CAtlasImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180252930 (-GetBounds@CAtlasImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetTransform@CAtlasImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180252A30 (-GetTransform@CAtlasImageSource@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetTransform@CAtlasImageSource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180252A40 (-GetTransform@CAtlasImageSource@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802529EC (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CAtlasImageSource::DoGetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  CAtlasTexture *v5; // rcx
  char result; // al
  int v7; // [rsp+38h] [rbp+10h]
  int v8; // [rsp+3Ch] [rbp+14h]

  if ( a3 )
  {
    v5 = *(CAtlasTexture **)(a1 + 32);
    *(_QWORD *)a3 = 0LL;
    if ( v5 )
    {
      CAtlasTexture::GetSize(v5);
      *(float *)(a3 + 8) = (float)v7;
      *(float *)(a3 + 12) = (float)v8;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0LL;
    }
  }
  result = 1;
  *(_OWORD *)a2 = _xmm;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  return result;
}
