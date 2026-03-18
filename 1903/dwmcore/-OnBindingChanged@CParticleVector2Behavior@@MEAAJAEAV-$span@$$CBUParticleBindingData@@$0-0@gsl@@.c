/*
 * XREFs of ?OnBindingChanged@CParticleVector2Behavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801EF170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleVector2Behavior::OnBindingChanged(__int64 a1, _QWORD *a2, char a3)
{
  if ( !a3 )
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 88);
  return Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames(a1 + 80, a2);
}
