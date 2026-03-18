/*
 * XREFs of ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180197F50
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180196CB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801C0970 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180197FB0 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 */

__int64 __fastcall CFilterEffect::InvertTransformToCalc2DBounds(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+34h] [rbp-34h]
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF

  v3 = *a2;
  v8 = 0;
  v7 = 0;
  v6 = v3;
  result = CFilterEffect::InvertTransformToCalc3DBounds(a1, &v6, &v9);
  if ( (_BYTE)result )
    *a3 = v9;
  return result;
}
