/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140663450
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140823240 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823530 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140823920 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140823B70 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x140839D60 (CmDumpKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A1294C (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140636B74 (CmListGetNextElement.c)
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
