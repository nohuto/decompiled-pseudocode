/*
 * XREFs of CmpDestroyHive @ 0x1407F6778
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405A6F70 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406C8B78 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1407ECDC0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407EF13C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407F4050 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F65D8 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmSaveKey @ 0x140801F30 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140802DAC (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401B322C (CmpUnJoinClassOfTrust.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140580888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405AFB54 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405AFC04 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 606);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
