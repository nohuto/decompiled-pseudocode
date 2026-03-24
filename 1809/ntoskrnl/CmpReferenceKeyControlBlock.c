/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140692A3C
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x14010EEA8 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140691C6C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F81DC (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x1407F3488 (CmpGetVirtualStoreRoot.c)
 *     CmpCreateLayerLink @ 0x1407F9BF0 (CmpCreateLayerLink.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9C88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407FA200 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408045F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405AFFE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x140692AA0 (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x140692D4C (CmpRemoveFromDelayedClose.c)
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
