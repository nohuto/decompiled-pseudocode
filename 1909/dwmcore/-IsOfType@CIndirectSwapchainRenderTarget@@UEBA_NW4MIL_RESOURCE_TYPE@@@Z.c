/*
 * XREFs of ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180193E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 84;
  result = 0;
  if ( v2 <= 0x3B )
  {
    v3 = 0x800000002000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
