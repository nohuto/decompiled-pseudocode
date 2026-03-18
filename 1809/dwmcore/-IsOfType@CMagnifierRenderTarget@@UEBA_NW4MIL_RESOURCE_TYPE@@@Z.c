/*
 * XREFs of ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18015D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMagnifierRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 92;
  result = 0;
  if ( v2 <= 0x21 )
  {
    v3 = 0x200000401LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
