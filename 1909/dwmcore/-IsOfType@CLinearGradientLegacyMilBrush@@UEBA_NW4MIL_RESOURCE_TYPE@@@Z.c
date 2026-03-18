/*
 * XREFs of ?IsOfType@CLinearGradientLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F3F0
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

  v2 = a2 - 68;
  result = 0;
  if ( v2 <= 0x1B )
  {
    v3 = 150994945;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
