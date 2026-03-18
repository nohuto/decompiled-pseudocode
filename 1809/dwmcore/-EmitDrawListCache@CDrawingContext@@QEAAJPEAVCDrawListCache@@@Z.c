/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0
 * Callers:
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180028D28 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801673D8 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18017A744 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18017ADBC (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  void *v8; // r15
  bool v9; // r14
  ClipPlaneIterator *v10; // rbp
  int v11; // eax
  unsigned int v12; // ecx
  int updated; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  struct D2D_RECT_F v20; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  v5 = 0;
  if ( *((_QWORD *)this + 45) || *((_QWORD *)this + 787) )
  {
    v20 = *(struct D2D_RECT_F *)((char *)a2 + 40);
    v18 = CDrawingContext::DrawSolidRectangle(this, &v20, &xmmword_18024C858);
    v5 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x749u);
  }
  else
  {
    v6 = *((_DWORD *)this + 816);
    if ( !v6 || *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v6 - 1)) > 0.0 )
    {
      v7 = *((_DWORD *)this + 120);
      if ( v7 )
        v8 = (void *)(*((_QWORD *)this + 62) + 68LL * (unsigned int)(v7 - 1));
      else
        v8 = &CMILMatrix::Identity;
      v9 = 0;
      if ( *((_QWORD *)this + 439) )
      {
        updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
        v5 = updated;
        if ( updated >= 0 )
        {
          v10 = (CDrawingContext *)((char *)this + 3520);
          v9 = *((_BYTE *)this + 3520) == 0;
          goto LABEL_9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x757u);
      }
      else
      {
        v10 = (CDrawingContext *)((char *)this + 3520);
        while ( 1 )
        {
LABEL_9:
          if ( v9 )
          {
            v16 = ClipPlaneIterator::UpdateClippingPlanes(v10);
            v5 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x762u);
              goto LABEL_12;
            }
          }
          v11 = CDrawListCache::Render(a2, this, v8);
          v5 = v11;
          if ( v11 < 0 )
            break;
          if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v10) )
            goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x769u);
      }
    }
  }
LABEL_12:
  if ( v5 != -2003304441 )
    return v5;
  return v2;
}
