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

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax

  v6 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&qword_180166380, (unsigned __int64)a2, a3, a4);
    v7 = bsearch(
           Key,
           Base,
           (unsigned int)NumOfElements,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
    if ( v7 )
    {
      v6 = 0;
      *a2 = v7[2];
    }
    RtlReleaseSRWLockShared(&qword_180166380);
  }
  return v6;
}
