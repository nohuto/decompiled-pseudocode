/*
 * XREFs of CmEqualTrans @ 0x140631BF4
 * Callers:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmGetKCBCacheSecurity @ 0x140631B4C (CmGetKCBCacheSecurity.c)
 *     CmpLockIXLockIntent @ 0x140631EAC (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14063203C (CmpLockIXLockExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x1406334C0 (CmpIsKeyStackDeleted.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x140638AA8 (CmGetVisibleSubkeyCount.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindSubKeyByNumberEx @ 0x140650460 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x140651FC0 (CmpQueryKeyDataFromNode.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpQueryKeyDataFromCache @ 0x140656CB0 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140656FB0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmRmIsKCBVisible @ 0x1406BE5B0 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1406DAFC0 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x14078A824 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x14082F2AC (CmpTransUowIsEqual.c)
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
