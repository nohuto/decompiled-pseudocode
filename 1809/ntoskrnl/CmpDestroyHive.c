/*
 * XREFs of CmpDestroyHive @ 0x1407F6798
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405A6F70 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406C8B98 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1407ECDE0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407EF15C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407F4070 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F65F8 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14080231C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140802DCC (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401B320C (CmpUnJoinClassOfTrust.c)
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
