/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180084430
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180084200 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180092930 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax

  v6 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock, a2, a3, a4);
    v7 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v7 )
    {
      v6 = 0;
      *(_QWORD *)a2 = v7[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v6;
}
