/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DD404 (--A-$span@M$0-0@gsl@@QEBAAEAM_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@M@Z @ 0x1801DDD58 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AnimateSingle(
        __int64 a1,
        gsl::details *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(a1, &v6);
  result = v6;
  **(_QWORD **)(a3 + 8) = v6;
  return result;
}
