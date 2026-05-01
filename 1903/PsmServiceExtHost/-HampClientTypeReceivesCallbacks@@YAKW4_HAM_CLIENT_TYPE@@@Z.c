/*
 * XREFs of ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x180030A84
 * Callers:
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x180030970 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampClientTypeReceivesCallbacks(int a1)
{
  return a1 >= 0 && (a1 <= 3 || a1 > 5 && a1 == 6);
}
