/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18005C710 (-CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  int LayoutGeometryDrawListBrush; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  CGeometryOnlyDrawListBrush *v15; // rcx
  FLOAT width; // xmm1_4
  CGeometryOnlyDrawListBrush *v17; // rax
  FLOAT height; // xmm0_4
  struct CGeometryOnlyDrawListBrush *v19; // rax
  char v20; // r9
  CNineGridDrawListBrush *v21; // rcx
  struct CDrawListBrush *v22; // rax
  CNineGridDrawListBrush *v23; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v24[2]; // [rsp+38h] [rbp-48h] BYREF
  char v25; // [rsp+48h] [rbp-38h]
  _DWORD v26[4]; // [rsp+50h] [rbp-30h] BYREF
  CNineGridDrawListBrush **v27; // [rsp+60h] [rbp-20h]
  CNineGridDrawListBrush *v28; // [rsp+68h] [rbp-18h] BYREF
  char v29; // [rsp+70h] [rbp-10h]
  CGeometryOnlyDrawListBrush *v30; // [rsp+A0h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 8) && *((_BYTE *)this + 112) )
  {
    v11 = *((float *)this + 21) * *((float *)this + 20);
    v30 = 0LL;
    v12 = *((float *)this + 23) * *((float *)this + 22);
    v24[1] = 0LL;
    *(float *)v26 = v11;
    v13 = *((float *)this + 25) * *((float *)this + 24);
    v24[0] = (struct CGeometryOnlyDrawListBrush *)&v30;
    *(float *)&v26[1] = v12;
    v14 = *((float *)this + 27) * *((float *)this + 26);
    v25 = 1;
    *(float *)&v26[2] = v13;
    *(float *)&v26[3] = v14;
    v9 = CGeometryOnlyDrawListBrush::Create(&v24[1]);
    if ( v25 )
    {
      v15 = *(CGeometryOnlyDrawListBrush **)v24[0];
      *(_QWORD *)v24[0] = v24[1];
      if ( v15 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1u);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, v9, 0x1CEu);
    }
    else
    {
      width = a3->width;
      v17 = v30;
      height = a3->height;
      v24[0] = 0LL;
      v28 = 0LL;
      *((_BYTE *)v30 + 52) = 1;
      *((_DWORD *)v17 + 12) = 50529027;
      v24[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v29 = 1;
      *((_OWORD *)v17 + 2) = *(_OWORD *)v24;
      v19 = v30;
      v20 = *((_BYTE *)this + 112);
      v23 = 0LL;
      v30 = 0LL;
      v24[0] = v19;
      v27 = &v23;
      v9 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)v24, (int)v26, (int)v26, v20, &v28);
      if ( v29 )
      {
        v21 = *v27;
        *v27 = v28;
        if ( v21 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1);
      }
      if ( v24[0] )
        std::default_delete<CShape>::operator()((__int64)v21, (__int64 (__fastcall ***)(_QWORD, __int64))v24[0]);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v9, 0x1D7u);
        if ( v23 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v23, 1);
      }
      else
      {
        v22 = v23;
        v23 = 0LL;
        *a4 = v22;
      }
    }
    if ( v30 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v30, 1u);
  }
  else
  {
    LayoutGeometryDrawListBrush = CSpriteVisualContent::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v9 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, LayoutGeometryDrawListBrush, 0x1DDu);
  }
  return (unsigned int)v9;
}
