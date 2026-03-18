/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801C3080
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180216370 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  struct CEffect *EffectInternal; // rbx

  v1 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           53LL) )
    {
      v1 = *((float *)EffectInternal + 18);
    }
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
