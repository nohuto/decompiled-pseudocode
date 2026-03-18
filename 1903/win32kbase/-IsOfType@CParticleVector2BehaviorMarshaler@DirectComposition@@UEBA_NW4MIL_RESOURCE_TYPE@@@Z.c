/*
 * XREFs of ?IsOfType@CParticleVector2BehaviorMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A5F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleVector2BehaviorMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 109;
  result = 0;
  if ( v2 <= 0x16 )
  {
    v3 = 4195337;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
