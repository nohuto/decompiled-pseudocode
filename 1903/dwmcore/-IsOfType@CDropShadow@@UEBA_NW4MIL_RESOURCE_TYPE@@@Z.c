/*
 * XREFs of ?IsOfType@CDropShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C3C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropShadow::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x32 )
  {
    v2 = 0x4081000004000LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}
