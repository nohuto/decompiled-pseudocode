/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x1407FA70C
 * Callers:
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
