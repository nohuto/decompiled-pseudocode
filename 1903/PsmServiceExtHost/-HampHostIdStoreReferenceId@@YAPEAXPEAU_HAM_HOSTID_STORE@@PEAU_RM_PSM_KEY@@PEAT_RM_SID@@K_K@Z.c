/*
 * XREFs of ?HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180017E98
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016D50 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800177DC (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180017844 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        struct _RM_PSM_KEY *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = a4;
  v12 = 0LL;
  v11 = a5;
  HampHostIdStoreAcquireLockShared(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    &v13,
    a3,
    a2,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreReferenceHostIdCallback,
    &v11);
  CempLockTrackerMarkReleased(v9, v8, 11LL);
  RtlReleaseSRWLockShared(a1);
  return v12;
}
