/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1405D68BC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLockKeyForWrite @ 0x14068E360 (CmLockKeyForWrite.c)
 *     CmpPerformUnloadKey @ 0x140692390 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406BFF70 (NtFlushKey.c)
 *     CmpAssignKeySecurity @ 0x14075B95C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x1407E88D0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407E8EB0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91B0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407E95C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9810 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED62C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8AC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFD80 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F19FC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C74 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x140801198 (CmDumpKey.c)
 *     CmSaveKey @ 0x140801F30 (CmSaveKey.c)
 *     CmpRefreshHive @ 0x140802DAC (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x1409CCEA8 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D7310 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  char IsKeyDeletedForKeyBody; // al
  unsigned int v4; // edx

  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, a2);
  v4 = 0;
  if ( IsKeyDeletedForKeyBody )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  return v4;
}
