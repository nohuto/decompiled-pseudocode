/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801B68E0
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18019A8A0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  double *EffectInternal; // rbx

  v1 = FLOAT_1_0;
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 51LL) )
      v1 = EffectInternal[9];
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
