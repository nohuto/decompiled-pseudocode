/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x140692E2C
 * Callers:
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 */

char __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int32 *BugCheckParameter2)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ett
  char v4; // bl

  v1 = *BugCheckParameter2;
  while ( 1 )
  {
    if ( !v1 )
    {
      ExAcquirePushLockSharedEx((ULONG_PTR)(BugCheckParameter2 + 10), 0LL);
      _InterlockedAdd(BugCheckParameter2 + 12, 1u);
      v4 = CmpReferenceKeyControlBlock((ULONG_PTR)BugCheckParameter2);
      CmpUnlockKcb((ULONG_PTR)BugCheckParameter2);
      return v4;
    }
    if ( v1 == -1 )
      break;
    v3 = v1;
    v1 = _InterlockedCompareExchange(BugCheckParameter2, v1 + 1, v1);
    if ( v3 == v1 )
      return 1;
  }
  return 0;
}
