/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E94A0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180183958 (--A-$span@PEAVCOverlayContext@@$0-0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9D24 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AnimateSingle(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r8
  _OWORD *result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  gsl::span<COverlayContext *,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(a1, &v9, v7, a3);
  result = *(_OWORD **)(a4 + 8);
  *result = v9;
  return result;
}
