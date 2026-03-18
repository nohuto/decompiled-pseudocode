/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E7C70
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180182278 (--A-$span@PEAVCOverlayContext@@$0-0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E83AC (-GetValueAt@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AnimateSingle(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  gsl::span<COverlayContext *,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(a1, &v9, v7, a3);
  result = v9;
  **(_QWORD **)(a4 + 8) = v9;
  return result;
}
