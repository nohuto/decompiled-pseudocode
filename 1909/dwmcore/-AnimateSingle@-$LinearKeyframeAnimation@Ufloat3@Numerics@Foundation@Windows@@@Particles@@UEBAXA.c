/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E7CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180182278 (--A-$span@PEAVCOverlayContext@@$0-0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E8490 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AnimateSingle(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-10h]

  gsl::span<COverlayContext *,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(a1, &v10, v7, a3);
  v8 = *(_QWORD *)(a4 + 8);
  result = v11;
  *(_QWORD *)v8 = v10;
  *(_DWORD *)(v8 + 8) = result;
  return result;
}
