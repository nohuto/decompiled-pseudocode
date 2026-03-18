/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E7C10
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180182278 (--A-$span@PEAVCOverlayContext@@$0-0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E82F4 (-GetValueAt@-$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV-$span@M$0-0@gsl@@@Z.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AnimateSingle(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 result; // rax
  float ValueAt; // [rsp+48h] [rbp+20h]

  gsl::span<COverlayContext *,-1>::operator[](a2);
  ValueAt = Particles::LinearKeyframeAnimation<float>::GetValueAt(a1, v7, a3);
  result = LODWORD(ValueAt);
  **(float **)(a4 + 8) = ValueAt;
  return result;
}
