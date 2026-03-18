/*
 * XREFs of ?IsOfType@CCompositionSkyBoxBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801D34F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSkyBoxBrush::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x2B )
  {
    v2 = 0x82000004000LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}
