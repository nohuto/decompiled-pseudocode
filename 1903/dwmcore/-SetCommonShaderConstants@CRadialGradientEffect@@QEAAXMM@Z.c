/*
 * XREFs of ?SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z @ 0x180259B14
 * Callers:
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F57A0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRadialGradientEffect::SetCommonShaderConstants(CRadialGradientEffect *this, float a2, float a3)
{
  if ( *((float *)this + 9) != a2 || *((float *)this + 10) != a3 )
  {
    *((float *)this + 9) = a2;
    *((float *)this + 10) = a3;
    ++*((_DWORD *)this + 8);
  }
}
