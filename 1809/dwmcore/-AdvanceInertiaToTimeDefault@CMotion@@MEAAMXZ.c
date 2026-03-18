/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x1801DF930
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x1801E0830 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x1801E0C50 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x1801DFCBC (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm2_4
  double v7; // xmm0_8

  v1 = *((float *)this + 16);
  v3 = *((float *)this + 5);
  v4 = v1 > v3;
  if ( v3 > *((float *)this + 9) )
    v4 = 2;
  if ( v4 )
  {
    if ( (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v5 = *((float *)this + 6);
      v6 = 0.0;
      if ( v5 != 0.0 )
      {
        v7 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
        v5 = *((float *)this + 6);
        v6 = *(float *)&v7;
        v1 = *((float *)this + 16);
      }
      if ( v1 <= v3 )
        v1 = *((float *)this + 9);
      CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v6, v1, v5);
    }
    else
    {
      return fminf(fmaxf(v3, v1), *((float *)this + 9));
    }
  }
  return v3;
}
