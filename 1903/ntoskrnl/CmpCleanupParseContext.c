/*
 * XREFs of CmpCleanupParseContext @ 0x1405FDF30
 * Callers:
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     CmpCreatePredefined @ 0x14075E4A0 (CmpCreatePredefined.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077C23C (CmpStartSiloRegistryNamespace.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x140840E5C (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x1408270E8 (CmpFreeExtraParameter.c)
 */

__int64 *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  __int64 **v5; // rbx
  __int64 *result; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( !a2 )
    {
      CmpLockRegistry();
      v4 = *(_QWORD *)(a1 + 88);
    }
    CmpDereferenceKeyControlBlock(v4);
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v5 = (__int64 **)(a1 + 144);
  result = *v5;
  if ( (__int64 **)(*v5)[1] != v5 )
    goto LABEL_6;
  v7 = (__int64 *)*result;
  if ( *(__int64 **)(*result + 8) != result )
    goto LABEL_6;
  *v5 = v7;
  v7[1] = (__int64)v5;
  if ( result != (__int64 *)v5 )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(result);
      result = *v5;
      if ( (__int64 **)(*v5)[1] != v5 )
        break;
      v8 = (__int64 *)*result;
      if ( *(__int64 **)(*result + 8) != result )
        break;
      *v5 = v8;
      v8[1] = (__int64)v5;
      if ( result == (__int64 *)v5 )
        return result;
    }
LABEL_6:
    __fastfail(3u);
  }
  return result;
}
