/*
 * XREFs of CmLockHive @ 0x14062BF78
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406BB480 (CmpCloseKeyObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
}
