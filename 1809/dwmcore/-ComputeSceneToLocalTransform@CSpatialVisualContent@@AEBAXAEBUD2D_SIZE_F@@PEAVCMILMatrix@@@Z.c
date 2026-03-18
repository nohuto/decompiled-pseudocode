/*
 * XREFs of ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801DAEA8
 * Callers:
 *     ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB030 (-Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB140 (-Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180072064 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x1801E3E74 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CSpatialVisualContent::ComputeSceneToLocalTransform(
        CSpatialVisualContent *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm8_4
  float v9; // xmm8_4
  bool v10; // al
  float left; // xmm6_4
  float v12; // xmm1_4
  struct D2D_RECT_F v13; // [rsp+48h] [rbp-39h] BYREF
  D2D_SIZE_F v14; // [rsp+58h] [rbp-29h] BYREF
  struct D2D_RECT_F v15; // [rsp+60h] [rbp-21h] BYREF
  float v16[4]; // [rsp+70h] [rbp-11h] BYREF
  float v17[4]; // [rsp+80h] [rbp-1h] BYREF

  (*(void (__fastcall **)(_QWORD, float *, float *))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), v16, v17);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17[1]) & _xmm);
  v7 = fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16[1]) & _xmm), v6);
  v14.height = v7 + v7;
  v8 = fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16[0]) & _xmm), COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17[0]) & _xmm));
  v9 = v8 + v8;
  v14.width = v9;
  StretchAlign::Arrange((CSpatialVisualContent *)((char *)this + 88), &v15, &v14, a2, &v13);
  v10 = IsEmpty(&v13);
  left = v13.left;
  if ( v10 )
    v12 = 0.0;
  else
    v12 = (float)(v13.right - v13.left) / v9;
  CMILMatrix::SetScale(a3, v12, COERCE_FLOAT(LODWORD(v12) ^ _xmm), v12, 0.0, 0.0, 0.0);
  CMILMatrix::Translate(a3, (float)(left + v13.right) * 0.5, (float)(v13.bottom + v13.top) * 0.5, 0.0);
}
