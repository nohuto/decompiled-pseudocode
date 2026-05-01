/*
 * XREFs of ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003EB88
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EA78 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180007278 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800072FC (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

void __fastcall HampHostIdStoreInvalidateForSession(struct _HAM_HOSTID_STORE *a1, struct _HAM_SESSION *a2)
{
  __int64 v4; // rdx

  HampHostIdStoreAcquireLockExclusive(a1, (__int64)a2);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    (unsigned int *)a2 + 22,
    0LL,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive(a1, v4);
}
