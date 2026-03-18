/*
 * XREFs of ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A8A40
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

  v2 = a2 - 99;
  result = 0;
  if ( v2 <= 0x2C )
  {
    v3 = 0x100000000401LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
