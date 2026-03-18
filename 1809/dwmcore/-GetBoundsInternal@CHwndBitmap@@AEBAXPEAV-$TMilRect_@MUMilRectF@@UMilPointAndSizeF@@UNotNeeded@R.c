/*
 * XREFs of ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EF4B0
 * Callers:
 *     ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001F280 (-HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008FAE0 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18008F888 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

void __fastcall CHwndBitmap::GetBoundsInternal(__int64 a1, __int64 a2)
{
  struct CVisualTree *v4; // rcx
  float v5; // [rsp+20h] [rbp-30h] BYREF
  float v6; // [rsp+24h] [rbp-2Ch] BYREF
  float v7; // [rsp+28h] [rbp-28h] BYREF
  float v8[6]; // [rsp+30h] [rbp-20h] BYREF

  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)a1) && (v4 = *(struct CVisualTree **)(a1 + 112)) != 0LL )
  {
    CVisualTree::GetBounds(v4, (__int64)v8);
    if ( *(_BYTE *)(a1 + 120) )
    {
      if ( CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 104), &v6, &v5, &v7) )
      {
        v8[1] = v8[1] + COERCE_FLOAT(LODWORD(v5) ^ _xmm);
        v8[0] = v8[0] + COERCE_FLOAT(LODWORD(v6) ^ _xmm);
        v8[3] = v8[3] + COERCE_FLOAT(LODWORD(v5) ^ _xmm);
        v8[2] = v8[2] + COERCE_FLOAT(LODWORD(v6) ^ _xmm);
      }
    }
    *(_OWORD *)a2 = *(_OWORD *)v8;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
}
