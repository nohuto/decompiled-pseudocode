/*
 * XREFs of ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18007B670
 * Callers:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007A18C (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180017844 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003A814 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003A844 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

void __fastcall HampHostIdStoreInvalidateForPackage(struct _HAM_HOSTID_STORE *a1, struct _HAM_PACKAGE *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v4 = *(_QWORD *)(v2 + 160);
  v6[1] = 0LL;
  v6[0] = a2;
  HampHostIdStoreAcquireLockExclusive(a1, (__int64)a2);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    (unsigned int *)(v4 + 88),
    (union _RM_SID *)(v2 + 88),
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreInvalidatePackageEntriesCallback,
    v6);
  HampHostIdStoreReleaseLockExclusive(a1, v5);
}
