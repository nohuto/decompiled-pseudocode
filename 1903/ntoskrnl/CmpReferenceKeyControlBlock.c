/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14069B5DC
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1400E9848 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x140650460 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14069BD88 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F7FA0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmpCreateLayerLink @ 0x1408330B8 (CmpCreateLayerLink.c)
 *     CmpPrepareDiscardReplacePost @ 0x140833580 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x14069B7F0 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    return CmpRemoveFromDelayedClose();
  return result;
}
