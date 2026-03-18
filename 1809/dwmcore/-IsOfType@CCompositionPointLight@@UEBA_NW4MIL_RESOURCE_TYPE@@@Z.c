/*
 * XREFs of ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180190270
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800604E0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositionPointLight::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( (unsigned int)(a2 - 32) <= 1 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
