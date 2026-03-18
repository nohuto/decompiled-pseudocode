/*
 * XREFs of ?IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175550
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801755E0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositeEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 28 )
    return 1;
  v2 = CFilterEffect::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
