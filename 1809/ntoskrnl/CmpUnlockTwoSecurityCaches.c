/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x140700FA4
 * Callers:
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
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
