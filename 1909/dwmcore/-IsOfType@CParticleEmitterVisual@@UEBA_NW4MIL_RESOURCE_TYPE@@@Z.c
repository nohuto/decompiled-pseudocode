/*
 * XREFs of ?IsOfType@CParticleEmitterVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EC060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CParticleEmitterVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 109) <= 0x16 && (v2 = 4194433, _bittest(&v2, a2 - 109)) || a2 == 189;
  return result;
}
