/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140650290
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14064DD70 (CmEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x14083A700 (CmDumpKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A121B4 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  char *NextElement; // rcx
  __int64 v7; // r9
  _QWORD **v8; // r10
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 9) == 0 )
  {
    if ( !a2 )
      return 0LL;
    NextElement = CmListGetNextElement((_QWORD **)(v3 + 208), &v10, 32);
    if ( !NextElement )
      return 0LL;
    while ( 1 )
    {
      v9 = *((_DWORD *)NextElement + 17);
      if ( v9 == 2 || v9 == 11 )
        break;
      result = (__int64)CmListGetNextElement(v8, &v10, 32);
      NextElement = (char *)result;
      if ( !result )
        return result;
    }
    if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v7) )
      return 0LL;
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( (v4 & 1) != 0 )
    return 3221226533LL;
  else
    return 3221225852LL;
}
