/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x1407FA72C
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1405D26FC (CmpReferenceHive.c)
 */

char __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = *(_QWORD *)(BugCheckParameter2 + 1640) + 24LL * (unsigned int)BugCheckParameter4;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
