/*
 * XREFs of ?IsOfType@CHueRotationEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A3AA0
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

  v2 = a2 - 51;
  result = 0;
  if ( v2 <= 0x1B )
  {
    v3 = 134217761;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
