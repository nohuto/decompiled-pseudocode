/*
 * XREFs of ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800596D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 102;
  result = 0;
  if ( v2 <= 0x3E )
  {
    v3 = 0x4080000000002001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
