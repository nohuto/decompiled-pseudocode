/*
 * XREFs of CmpCleanupParseContext @ 0x1405B5FC4
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1405B5A60 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x140641350 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140691E18 (CmUnloadKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407307B8 (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x140732EC4 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407E95C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9810 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F19FC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A18 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1408075FC (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140645100 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140645150 (CmpUnlockRegistry.c)
 *     CmpFreeExtraParameter @ 0x1407EC5DC (CmpFreeExtraParameter.c)
 */

__int64 *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  __int64 **v5; // rbx
  __int64 *result; // rax
  __int64 *v7; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( !a2 )
    {
      CmpLockRegistry(v4);
      v4 = *(_QWORD *)(a1 + 88);
    }
    CmpDereferenceKeyControlBlock(v4);
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v5 = (__int64 **)(a1 + 144);
  while ( 1 )
  {
    result = *v5;
    if ( (__int64 **)(*v5)[1] != v5 || (v7 = (__int64 *)*result, *(__int64 **)(*result + 8) != result) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = (__int64)v5;
    if ( result == (__int64 *)v5 )
      break;
    CmpFreeExtraParameter(result);
  }
  return result;
}
