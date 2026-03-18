/*
 * XREFs of ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800535E4
 * Callers:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180087F84 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCpuClip::RectangleShapeFullyContains(__int64 a1, __int128 *a2, CMILMatrix *a3)
{
  char v5; // bl
  struct D2D_RECT_F v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  (*(void (__fastcall **)(__int64, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v7, 0LL);
  if ( !IsEmpty(&v7) )
  {
    v7 = (struct D2D_RECT_F)_mm_add_ps((__m128)v7, (__m128)_xmm);
    if ( a3 )
      CMILMatrix::Transform2DBoundsHelper<0>(a3);
    else
      v8 = *a2;
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v7.left, (float *)&v8);
  }
  return v5;
}
