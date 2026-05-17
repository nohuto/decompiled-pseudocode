/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180080180
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180078810 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x18008F8C0 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax

  v6 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock, (unsigned __int64)a2, a3, a4);
    v7 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v7 )
    {
      v6 = 0;
      *a2 = v7[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v6;
}
