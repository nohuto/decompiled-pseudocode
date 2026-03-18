/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF360
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001391C (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x180056554 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800A5950 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF440 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801947AC (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  struct CDropShadow *v9; // rax
  __int64 v10; // r10
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm1_4
  CDropShadow *DropShadow; // rax
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  struct D2D_RECT_F v16; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-30h] BYREF

  if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    *(_QWORD *)&v16.left = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef(this, (struct CSpriteVisualContent **)&v16) )
    {
      v11 = *((_DWORD *)a2 + 816);
      if ( v11 )
        v12 = *(float *)(*((_QWORD *)a2 + 410) + 4LL * (unsigned int)(v11 - 1));
      else
        v12 = FLOAT_1_0;
      v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - 1.0)) & _xmm);
      if ( v13 >= 0.0000011920929
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, char *, struct D2D_RECT_F *))(**(_QWORD **)&v16.left + 288LL))(
              *(_QWORD *)&v16.left,
              (char *)this + 132,
              &v16) )
      {
        *(_QWORD *)&v16.left = 0LL;
        *(_QWORD *)&v16.right = 0LL;
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v16);
    }
    LOBYTE(v15) = 0;
    *(_OWORD *)v17 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v9 = CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(
      this,
      (__int64)v9,
      1u,
      0,
      (struct IRenderTarget **)a2,
      v10,
      (__int64)&v15,
      (__int64)v17);
  }
  result = CVisual::RenderContent(this, a2, a3);
  v8 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, result, 0x9Du);
    return v8;
  }
  return result;
}
