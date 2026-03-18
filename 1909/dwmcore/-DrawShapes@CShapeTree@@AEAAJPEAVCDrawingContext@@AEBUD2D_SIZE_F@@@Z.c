/*
 * XREFs of ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020CEFC
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020CE00 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007D9D4 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x18016E860 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18016EDD4 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016FC90 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18020CB98 (--1CShapeDrawingContext@@QEAA@XZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180251528 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18025197C (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CShapeTree::DrawShapes(CShapeTree *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  char v4; // r14
  int v5; // esi
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+80h] [rbp-80h]
  float v22[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[544]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = (int)a3;
  v23 = *((_OWORD *)this + 4);
  if ( *((_BYTE *)this + 81) )
  {
    width = a3->width;
    height = a3->height;
    v22[0] = 0.0;
    v22[1] = 0.0;
    v22[2] = width;
    v22[3] = height;
    LOBYTE(v19) = 0;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v22, (float *)&v23) )
    {
      v10 = CDrawingContext::MarkCurrentState(a2);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x13Du, 0LL);
        return v3;
      }
      v4 = 1;
      v12 = CDrawingContext::PushClipRectForCurrentNode((const struct CVisualTree **)a2, (struct MilRectF *)v22, &v19);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x140u, 0LL);
LABEL_13:
        CDrawingContext::RestoreStateToLastMark(a2);
        return v3;
      }
      if ( (_BYTE)v19 )
        goto LABEL_13;
    }
    v21 = 0;
    CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v20);
    CScopedClipStack::GetClipBoundsWorld((__int64)a2 + 1008, (__int64)&v23);
    CShapeDrawingContext::CShapeDrawingContext((unsigned int)v24, (_DWORD)a2, v5, (unsigned int)&v23, (__int64)v20);
    v14 = CShapeTreeIterator::Walk<CShapeDrawingContext>(v24, this, v24);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x14Cu, 0LL);
    }
    else
    {
      v16 = CShapeDrawingContext::Render((CShapeDrawingContext *)v24);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x14Du, 0LL);
    }
    CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)v24);
    if ( v4 )
      goto LABEL_13;
  }
  return v3;
}
