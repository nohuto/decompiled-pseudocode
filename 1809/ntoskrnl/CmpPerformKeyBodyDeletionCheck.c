/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1405CC550 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpAssignKeySecurity @ 0x14075CB4C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x1409CDEA8 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
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
