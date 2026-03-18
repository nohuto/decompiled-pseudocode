/*
 * XREFs of ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0480 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositionLight::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  bool v4; // al

  if ( a2 == 33 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
