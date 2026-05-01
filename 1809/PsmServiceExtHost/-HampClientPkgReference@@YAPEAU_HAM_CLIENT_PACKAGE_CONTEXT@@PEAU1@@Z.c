/*
 * XREFs of ?HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z @ 0x180054810
 * Callers:
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001520 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_CLIENT_PACKAGE_CONTEXT *__fastcall HampClientPkgReference(struct _HAM_CLIENT_PACKAGE_CONTEXT *a1)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  return a1;
}
