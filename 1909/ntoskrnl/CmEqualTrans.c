/*
 * XREFs of CmEqualTrans @ 0x140635A74
 * Callers:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmGetKCBCacheSecurity @ 0x1406359CC (CmGetKCBCacheSecurity.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x14063BB38 (CmGetVisibleSubkeyCount.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1406650C0 (CmpQueryKeyDataFromNode.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpQueryKeyDataFromCache @ 0x140669CD0 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140669FD0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmRmIsKCBVisible @ 0x1406BE060 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1406DB8EC (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x14078CCC4 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x14082F11C (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual(a1 + 88, a2 + 88);
}
