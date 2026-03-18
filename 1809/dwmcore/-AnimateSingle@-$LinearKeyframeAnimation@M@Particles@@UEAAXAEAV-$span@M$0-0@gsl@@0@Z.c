/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD460
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DD404 (--A-$span@M$0-0@gsl@@QEBAAEAM_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMM@Z @ 0x1801DDCC8 (-GetValueAt@-$LinearKeyframeAnimation@M@Particles@@QEBAMM@Z.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AnimateSingle(__int64 a1, gsl::details *a2, __int64 a3)
{
  __int64 result; // rax
  float ValueAt; // [rsp+40h] [rbp+18h]

  gsl::span<float,-1>::operator[](a2);
  ValueAt = Particles::LinearKeyframeAnimation<float>::GetValueAt(a1);
  result = LODWORD(ValueAt);
  **(float **)(a3 + 8) = ValueAt;
  return result;
}
