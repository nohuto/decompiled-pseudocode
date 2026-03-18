/*
 * XREFs of ?OnBindingChanged@CParticleColorBehavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801E8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleColorBehavior::OnBindingChanged(__int64 a1, _QWORD *a2, char a3)
{
  if ( !a3 )
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 88);
  return Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AppendFrames(a1 + 80, a2);
}
