/*
 * XREFs of ?UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CC728
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMatrix@@@Z @ 0x1801CB24C (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMat.c)
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAVCVisual@@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x1801CB2A8 (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V-$span@PEAVCVisual@@$0-0.c)
 */

__int64 __fastcall CProjectedShadow::UpdateTransforms(__m128 *this, struct CDrawingContext *a2)
{
  struct CVisual *v4; // r14
  struct CVisual *v5; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *v7; // r8
  __int128 v8; // xmm0
  int SrcToDestVisualTransform; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  struct CMILMatrix *v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v21; // [rsp+60h] [rbp-10h] BYREF

  v4 = *(struct CVisual **)(this[4].m128_u64[1] + 56);
  v5 = *(struct CVisual **)(this[5].m128_u64[0] + 56);
  v6 = *(_QWORD *)(this[5].m128_u64[1] + 88);
  if ( v6 )
    v7 = (struct _LIST_ENTRY *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  else
    v7 = 0LL;
  if ( !v7 )
    goto LABEL_7;
  v20[0] = v5;
  *(_QWORD *)&v19 = 2LL;
  v18[0] = (char *)this + 244;
  v20[1] = v4;
  v18[1] = (char *)this + 312;
  *((_QWORD *)&v19 + 1) = v18;
  v8 = v19;
  *((_QWORD *)&v19 + 1) = v20;
  v21 = v8;
  SrcToDestVisualTransform = CProjectedShadow::GetSrcToDestVisualTransform(
                               (__int64)a2,
                               (__int64 *)&v19,
                               v7,
                               (__int64 *)&v21);
  v11 = SrcToDestVisualTransform;
  if ( SrcToDestVisualTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, SrcToDestVisualTransform, 0x489u);
  }
  else
  {
LABEL_7:
    v12 = CProjectedShadow::GetSrcToDestVisualTransform(a2, v4, v5, (struct CMILMatrix *)&this[6].m128_u32[3]);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x48Cu);
    }
    else if ( !CMILMatrix::SetToInverse(this + 11, (const struct CMILMatrix *)&this[6].m128_u32[3]) )
    {
      v15 = CProjectedShadow::GetSrcToDestVisualTransform(a2, v5, v4, v14);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x48Fu);
    }
  }
  return v11;
}
