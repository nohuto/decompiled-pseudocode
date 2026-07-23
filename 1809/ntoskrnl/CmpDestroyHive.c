/*
 * XREFs of CmpDestroyHive @ 0x1407F7978
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405A7F70 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1407EDFC0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F77D8 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401B336C (CmpUnJoinClassOfTrust.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140581888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405B0B54 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405B0C04 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
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
