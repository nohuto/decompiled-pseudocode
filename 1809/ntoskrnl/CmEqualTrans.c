/*
 * XREFs of CmEqualTrans @ 0x1405A94E8
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1405A8E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A8EE8 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AA548 (CmGetVisibleSubkeyCount.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D3570 (CmpQueryKeyDataFromNode.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D7310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D79A0 (CmpQueryKeyDataFromCache.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKCBCacheSecurity @ 0x1405D8A10 (CmGetKCBCacheSecurity.c)
 *     CmpIsKeyStackDeleted @ 0x140644650 (CmpIsKeyStackDeleted.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     CmRmIsKCBVisible @ 0x140699930 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1406B9784 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BD508 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKeyFlags @ 0x140763E40 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1407F64F0 (CmpTransUowIsEqual.c)
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
