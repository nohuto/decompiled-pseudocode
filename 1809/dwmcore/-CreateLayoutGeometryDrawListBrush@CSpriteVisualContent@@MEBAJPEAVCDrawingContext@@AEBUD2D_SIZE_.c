/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18005C710
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001DC70 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSpriteVisualContent::CreateLayoutGeometryDrawListBrush(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  CGeometryOnlyDrawListBrush *v6; // rcx
  int v7; // ebx
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v10; // rax
  CGeometryOnlyDrawListBrush *v12; // [rsp+30h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v13[2]; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp-8h]

  v12 = 0LL;
  v13[1] = 0LL;
  v13[0] = (struct CGeometryOnlyDrawListBrush *)&v12;
  v14 = 1;
  v7 = CGeometryOnlyDrawListBrush::Create(&v13[1]);
  if ( v14 )
  {
    v6 = *(CGeometryOnlyDrawListBrush **)v13[0];
    *(_QWORD *)v13[0] = v13[1];
    if ( v6 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v6, 1u);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, v7, 0xB7u);
    if ( v12 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v12, 1u);
  }
  else
  {
    width = a3->width;
    height = a3->height;
    v10 = v12;
    v13[0] = 0LL;
    *(FLOAT *)&v13[1] = width;
    *((_BYTE *)v12 + 52) = 1;
    *((_DWORD *)v10 + 12) = 50529027;
    *((FLOAT *)&v13[1] + 1) = height;
    *((_OWORD *)v10 + 2) = *(_OWORD *)v13;
    *a4 = v12;
  }
  return (unsigned int)v7;
}
