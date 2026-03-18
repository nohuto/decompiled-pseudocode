/*
 * XREFs of ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB030
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801DAEA8 (-ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CSpatialVisualContent::Draw(struct IDwmSpatialWorld **this, CDrawingContext *a2)
{
  float *v4; // r8
  const struct D2D_SIZE_F *v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v14[64]; // [rsp+30h] [rbp-78h] BYREF
  int v15; // [rsp+70h] [rbp-38h]
  struct D2D_RECT_F v16; // [rsp+80h] [rbp-28h] BYREF

  if ( !CDrawingContext::IsBounding(a2) )
  {
    if ( *v4 > 0.0 && v4[1] > 0.0 )
    {
      v15 = 0;
      CSpatialVisualContent::ComputeSceneToLocalTransform((CSpatialVisualContent *)this, v5, (struct CMILMatrix *)v14);
      v11 = CDrawingContext::DrawSpatial(a2, this[9], (const struct CMILMatrix *)v14);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu);
        return v8;
      }
    }
    return 0;
  }
  v6 = (*((__int64 (__fastcall **)(struct IDwmSpatialWorld **, _QWORD, float *, struct D2D_RECT_F *))*this + 21))(
         this,
         0LL,
         v4,
         &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCFu);
    return v8;
  }
  v9 = CDrawingContext::DrawSolidRectangle(a2, &v16, &xmmword_1802BD070);
  v8 = v9;
  if ( v9 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD3u);
  return v8;
}
