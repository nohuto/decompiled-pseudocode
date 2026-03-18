/*
 * XREFs of CmpDestroyHive @ 0x14082F4C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14065EAFC (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x140827840 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F328 (CmpCreateEmptyHiveClone.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x14008BF44 (CmpUnJoinClassOfTrust.c)
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14063E1EC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14063E29C (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14063E34C (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 604);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
