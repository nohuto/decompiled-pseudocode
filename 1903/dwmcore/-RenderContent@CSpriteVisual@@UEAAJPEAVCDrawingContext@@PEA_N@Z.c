/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016454 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800801C4 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800AF438 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801CA54C (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // edi
  int v7; // eax
  unsigned int v8; // ecx
  struct CDropShadow *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  CDropShadow *DropShadow; // rax
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 95) & 8) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) )
    {
      *a3 = 1;
      return v3;
    }
    *((_BYTE *)a2 + 6354) = 1;
  }
  if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    *(_QWORD *)&v18.left = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef(this, (struct CSpriteVisualContent **)&v18) )
    {
      v13 = *((_DWORD *)a2 + 816);
      if ( v13 )
        v14 = *(float *)(*((_QWORD *)a2 + 410) + 4LL * (unsigned int)(v13 - 1));
      else
        v14 = *(float *)&FLOAT_1_0;
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm);
      if ( v15 >= 0.0000011920929
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, char *, struct D2D_RECT_F *))(**(_QWORD **)&v18.left + 344LL))(
              *(_QWORD *)&v18.left,
              (char *)this + 132,
              &v18) )
      {
        *(_QWORD *)&v18.left = 0LL;
        *(_QWORD *)&v18.right = 0LL;
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v18);
    }
    LOBYTE(v17) = 0;
    *(_OWORD *)v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v10 = CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(
      this,
      (__int64)v10,
      1u,
      v11,
      (struct IRenderTarget **)a2,
      v12,
      (__int64)&v17,
      (__int64)v19);
  }
  v7 = CVisual::RenderContent(this, a2, a3);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xBFu, 0LL);
  return v3;
}
