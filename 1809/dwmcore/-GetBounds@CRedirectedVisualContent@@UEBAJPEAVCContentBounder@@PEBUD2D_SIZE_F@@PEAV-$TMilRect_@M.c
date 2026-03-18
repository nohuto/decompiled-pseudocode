/*
 * XREFs of ?GetBounds@CRedirectedVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CRedirectedVisualContent::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  CVisualTree::GetBounds(*(struct CVisualTree **)(a1 + 64), (__int64)&v6);
  result = 0LL;
  *a4 = v6;
  return result;
}
