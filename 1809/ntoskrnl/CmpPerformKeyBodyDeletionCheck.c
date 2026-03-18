/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1405D68BC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406BFF90 (NtFlushKey.c)
 *     CmpAssignKeySecurity @ 0x14075B97C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407E8ED0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91D0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407E95E0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9830 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED64C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F1A1C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C94 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x1408011B8 (CmDumpKey.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmpRefreshHive @ 0x140802DCC (CmpRefreshHive.c)
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
