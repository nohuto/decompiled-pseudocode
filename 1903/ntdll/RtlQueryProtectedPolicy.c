/*
 * XREFs of RtlQueryProtectedPolicy @ 0x18007FAE0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180078390 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x18008F220 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // rax

  v4 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&stru_180166380);
    v5 = bsearch(
           PolicyGuid,
           Base,
           (unsigned int)NumOfElements,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
    if ( v5 )
    {
      v4 = 0;
      *PolicyValue = v5[2];
    }
    RtlReleaseSRWLockShared(&stru_180166380);
  }
  return v4;
}
