/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1406B8B24
 * Callers:
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x1406BA594 (CmpReferenceKeyControlBlock.c)
 */

char __fastcall CmpReferenceKeyControlBlockLockNotHeld(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)BugCheckParameter2;
  while ( v1 )
  {
    if ( v1 == -1 )
      KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v1 + 1, v1);
    if ( v3 == v1 )
      return v1;
  }
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  CmpReferenceKeyControlBlock(BugCheckParameter2);
  LOBYTE(v1) = CmpUnlockKcb(BugCheckParameter2);
  return v1;
}
