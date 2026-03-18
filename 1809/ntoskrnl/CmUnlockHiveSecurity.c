/*
 * XREFs of CmUnlockHiveSecurity @ 0x1406D0B28
 * Callers:
 *     CmpCreateTombstone @ 0x14026D05C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 1776, 0LL);
}
