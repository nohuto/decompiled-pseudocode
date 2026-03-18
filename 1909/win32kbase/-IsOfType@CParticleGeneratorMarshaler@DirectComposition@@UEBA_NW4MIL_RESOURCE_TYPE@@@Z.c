/*
 * XREFs of ?IsOfType@CParticleGeneratorMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A3C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleGeneratorMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 109;
  result = 0;
  if ( v2 <= 0x16 )
  {
    v3 = 4194561;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
