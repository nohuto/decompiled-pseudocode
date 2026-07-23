/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x140700FD4
 * Callers:
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v4; // rcx

  v2 = a2 + 1776;
  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  else
  {
    v4 = a2 + 1776;
    if ( a1 > a2 )
    {
      ExAcquirePushLockSharedEx(v4, 0LL);
      v4 = a1 + 1776;
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
}
