/*
 * XREFs of ?IsOfType@CLinearGradientLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLinearGradientLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 64;
  result = 0;
  if ( v2 <= 0x19 )
  {
    v3 = 41943041;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
