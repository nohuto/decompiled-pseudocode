/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( (unsigned int)(a2 - 102) <= 0x37 )
  {
    v2 = 0x80040000002001LL;
    if ( _bittest64(&v2, (unsigned int)(a2 - 102)) )
      return 1;
  }
  return result;
}
