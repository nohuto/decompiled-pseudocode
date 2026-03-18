/*
 * XREFs of ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BC150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 80;
  result = 0;
  if ( v2 <= 0x3F )
  {
    v3 = 0x8000000020000001uLL;
    if ( _bittest64((const __int64 *)&v3, (int)v2) )
      return 1;
  }
  return result;
}
