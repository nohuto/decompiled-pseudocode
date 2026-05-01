/*
 * XREFs of ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18003DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18003DC8C (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreInvalidateEntryCallback(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1, void *a2)
{
  HampHostIdStoreInvalidateEntry(a1);
  return 1LL;
}
