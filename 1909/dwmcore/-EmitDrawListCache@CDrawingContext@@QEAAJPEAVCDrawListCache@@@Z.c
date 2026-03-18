/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180095ECC
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800C8E40 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180017D30 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180096510 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801701D4 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801795F4 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180179C58 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  signed int updated; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  struct D2D_RECT_F v20; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  v5 = 0;
  if ( *((_QWORD *)this + 45) || *((_QWORD *)this + 787) )
  {
    v20 = *(struct D2D_RECT_F *)((char *)a2 + 40);
    v18 = CDrawingContext::DrawSolidRectangle(this, &v20, &xmmword_1802A1E58);
    v5 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x746u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x754u, 0LL);
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
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x75Fu, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x766u, 0LL);
      }
    }
  }
LABEL_12:
  if ( v5 != -2003304441 )
    return v5;
  return v2;
}
