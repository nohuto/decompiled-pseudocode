/*
 * XREFs of CmpDestroyHive @ 0x14082F334
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpFreeAllMemory @ 0x140826F40 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F198 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401128CC (CmpUnJoinClassOfTrust.c)
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     CmpCmdHiveClose @ 0x1406B9CA8 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406B9DFC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x1406B9EAC (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1406B9F5C (CmpVolumeContextDecrementRefCount.c)
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
