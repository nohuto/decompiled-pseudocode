/*
 * XREFs of ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180004850
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180004210 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x180004910 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  char v9; // al
  bool v10; // r10
  float result; // xmm0_4

  v3 = (CVisual *)*((_QWORD *)this + 7);
  v4 = 0;
  v5 = *(float *)&FLOAT_1_0;
  for ( *a3 = 0; ; *a3 = v10 )
  {
    v5 = v5 * CVisual::GetVisualAlpha(v3, a2);
    if ( v3 == *((CVisual **)a2 + 3) )
      break;
    if ( v8 || (v9 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 91LL), v10 = 0, v9) )
      v10 = 1;
    v3 = (CVisual *)*((_QWORD *)v3 + 10);
  }
  if ( v8 || (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 91LL) )
    v4 = 1;
  result = v5;
  *a3 = v4;
  return result;
}
