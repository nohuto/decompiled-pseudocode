/*
 * XREFs of ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18020D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18007BDD8 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020D860 (-GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CShapeTree::HitTest(
        CShapeTree *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  signed int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  Bounds = CShapeTree::GetBounds((__int64)this, 0LL, (float *)a2, (__int64)v10);
  v8 = Bounds;
  if ( Bounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x56u, 0LL);
  else
    *a4 = IsPointInRect(a3, (const struct MilRectF *)v10);
  return v8;
}
