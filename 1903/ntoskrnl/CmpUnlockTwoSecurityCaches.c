/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x140716278
 * Callers:
 *     CmpCopyKeyPartial @ 0x140716014 (CmpCopyKeyPartial.c)
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 *     CmpSyncKeyValues @ 0x140837924 (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rax

  v2 = a1 + 1776;
  if ( a1 != a2 )
  {
    ExReleasePushLockEx(a1 + 1776, 0LL);
    v2 = a2 + 1776;
  }
  return ExReleasePushLockEx(v2, 0LL);
}
