/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x1406CB1C8
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14064E82C (CmpReferenceHive.c)
 */

char __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r9
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(v2 + 1640) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ (v3 >> 9))),
    0LL);
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
  return result;
}
