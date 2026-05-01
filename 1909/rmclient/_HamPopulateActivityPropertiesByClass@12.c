/*
 * XREFs of _HamPopulateActivityPropertiesByClass@12 @ 0x100067D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActivityPropertiesInitializeByClass@@YGXPBGW4_HAM_ACTIVITY_CLASS@@PAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x10006820 (-HampActivityPropertiesInitializeByClass@@YGXPBGW4_HAM_ACTIVITY_CLASS@@PAU_HAM_ACTIVITY_PROPERTI.c)
 */

int __stdcall HamPopulateActivityPropertiesByClass(_WORD *a1, unsigned int a2, int a3)
{
  int v3; // ecx
  _WORD *i; // eax

  if ( !a1 )
    return -1073741585;
  v3 = 64;
  for ( i = a1; *i; ++i )
  {
    if ( !--v3 )
      return -1073741585;
  }
  if ( a2 > 6 )
    return -1073741584;
  HampActivityPropertiesInitializeByClass(a1, a3);
  return 0;
}
