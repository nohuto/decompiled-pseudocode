/*
 * XREFs of ?IsOfType@CHueRotationEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0168B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CHueRotationEffectMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 49;
  result = 0;
  if ( v2 <= 0x19 )
  {
    v3 = 33554465;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
