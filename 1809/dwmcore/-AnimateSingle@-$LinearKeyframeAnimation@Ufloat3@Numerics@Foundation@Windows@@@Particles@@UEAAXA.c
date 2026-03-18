/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD500
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DD404 (--A-$span@M$0-0@gsl@@QEBAAEAM_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801DDE3C (-GetValueAt@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AnimateSingle(
        __int64 a1,
        gsl::details *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-10h]

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(a1, &v7);
  v5 = *(_QWORD *)(a3 + 8);
  result = v8;
  *(_QWORD *)v5 = v7;
  *(_DWORD *)(v5 + 8) = result;
  return result;
}
