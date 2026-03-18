/*
 * XREFs of CmpCleanupParseContext @ 0x1405FF960
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14063E600 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 *     CmpCreatePredefined @ 0x140762DA0 (CmpCreatePredefined.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 *     NtQueryOpenSubKeys @ 0x140823920 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140823B70 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x1408404BC (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x1408267E8 (CmpFreeExtraParameter.c)
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
