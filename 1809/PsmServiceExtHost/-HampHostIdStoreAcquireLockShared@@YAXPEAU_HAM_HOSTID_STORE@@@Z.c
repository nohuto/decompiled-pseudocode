/*
 * XREFs of ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18006D1C0
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006D2F0 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18006D9B8 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x180023D40 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampHostIdStoreAcquireLockShared(struct _HAM_HOSTID_STORE *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 0xBu, 0);
  RtlAcquireSRWLockShared(a1);
}
