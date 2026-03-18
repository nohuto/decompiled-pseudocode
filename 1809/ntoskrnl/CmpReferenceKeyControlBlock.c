/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140692A5C
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x14010EE88 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140691C8C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F81FC (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0348 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x1407F34A8 (CmpGetVirtualStoreRoot.c)
 *     CmpCreateLayerLink @ 0x1407F9C10 (CmpCreateLayerLink.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9CA8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407FA220 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140804618 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405AFFE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x140692AC0 (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x140692D6C (CmpRemoveFromDelayedClose.c)
 */

char __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  v2 = *(_DWORD *)BugCheckParameter2;
  do
  {
    if ( v2 == -1 )
      return 0;
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v2 + 1, v2);
  }
  while ( v3 != v2 );
  if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(BugCheckParameter2) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
  }
  else if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 2) != 0 )
  {
    CmpRemoveFromDelayedClose(BugCheckParameter2);
  }
  return 1;
}
