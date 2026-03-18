/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B1158
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800A3650 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800A4C90 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x1800B10D8 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B11A0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x1800D7FD0 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18015A9D8 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // rdx
  bool IsEmpty; // al
  _DWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // al
  char IsInfinite; // al
  __int64 v10; // r8
  char v11; // al

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || (IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a1), LOBYTE(v7) = 0, IsEmpty)
    && (v8 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v5), v8 != (_BYTE)v7)
    || (IsInfinite = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v6, v7), IsInfinite != (_BYTE)v2)
    && (v11 = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v10, v2), v11 != (_BYTE)v2) )
  {
    LOBYTE(v2) = 1;
  }
  return v2;
}
