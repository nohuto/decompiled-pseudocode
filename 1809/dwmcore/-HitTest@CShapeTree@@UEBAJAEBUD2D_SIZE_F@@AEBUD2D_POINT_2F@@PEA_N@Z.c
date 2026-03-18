/*
 * XREFs of ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801DAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18002D144 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DAB50 (-GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CShapeTree::HitTest(
        CShapeTree *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  Bounds = CShapeTree::GetBounds((__int64)this, 0LL, (float *)a2, (__int64)v10);
  v8 = Bounds;
  if ( Bounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x58u);
  else
    *a4 = IsPointInRect(a3, (const struct MilRectF *)v10);
  return v8;
}
