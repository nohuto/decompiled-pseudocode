/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801F0144
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F03B0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180007EA4 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801F1920 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::ComputeShadowColor(
        CProjectedShadow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct CVisualTree **a3)
{
  CProjectedShadowCaster *v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm0
  float EffectiveAlpha; // xmm0_4
  int v9; // eax
  float v10; // xmm1_4
  __int64 v11; // rax
  float *v12; // rdi
  float v13; // xmm0_4

  v5 = (CProjectedShadowCaster *)*((_QWORD *)this + 8);
  v6 = *((_QWORD *)v5 + 14);
  if ( v6 )
    v7 = *(_OWORD *)(v6 + 80);
  else
    v7 = _xmm;
  *(_OWORD *)&retstr->r = v7;
  EffectiveAlpha = CProjectedShadowCaster::GetEffectiveAlpha(v5, a3[757], (bool *)a3);
  v9 = *((_DWORD *)this + 62);
  v10 = (float)(EffectiveAlpha * *((float *)this + 21)) * retstr->a;
  retstr->a = v10;
  if ( v9 == 1 )
  {
    v11 = *((_QWORD *)this + 8);
    v12 = *(float **)(v11 + 120);
    if ( !v12 )
      v12 = *(float **)(*(_QWORD *)(v11 + 16) + 152LL);
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 19LL) )
    {
      v13 = v12[23] * retstr->a;
LABEL_11:
      retstr->a = v13;
    }
  }
  else if ( v9 == 5 )
  {
    v13 = (float)(CProjectedShadow::GetBlurForBoundary(this, 3LL) / *((float *)this + 20)) * v10;
    goto LABEL_11;
  }
  return retstr;
}
