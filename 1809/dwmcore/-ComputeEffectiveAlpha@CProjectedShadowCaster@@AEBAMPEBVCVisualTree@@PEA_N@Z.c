/*
 * XREFs of ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801ACF08
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x1801AE514 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1801B6FDC (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 */

float __fastcall CProjectedShadowCaster::ComputeEffectiveAlpha(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        bool *a3)
{
  CVisual *v3; // rdi
  bool v4; // bl
  float v5; // xmm6_4
  char v8; // r10
  float result; // xmm0_4
  char v10; // al
  bool v11; // r10

  v3 = (CVisual *)*((_QWORD *)this + 7);
  v4 = 0;
  v5 = FLOAT_1_0;
  for ( *a3 = 0; ; *a3 = v11 )
  {
    result = CVisual::GetVisualAlpha(v3, a2) * v5;
    v5 = result;
    if ( v3 == *((CVisual **)a2 + 3) )
      break;
    if ( v8 || (v10 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 86LL), v11 = 0, v10) )
      v11 = 1;
    v3 = (CVisual *)*((_QWORD *)v3 + 10);
  }
  if ( v8 || (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 86LL) )
    v4 = 1;
  *a3 = v4;
  return result;
}
