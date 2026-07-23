/*
 * XREFs of CmpCleanupParseContext @ 0x1405B6FC4
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407319A8 (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x1407340B4 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1408087FC (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreeExtraParameter @ 0x1407ED7DC (CmpFreeExtraParameter.c)
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
