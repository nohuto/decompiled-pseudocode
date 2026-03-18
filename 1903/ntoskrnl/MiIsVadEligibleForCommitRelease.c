/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1402BB320
 * Callers:
 *     MiProcessCommitIntact @ 0x140001AA8 (MiProcessCommitIntact.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiReleaseCommitForResetPages @ 0x1402BC154 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC304 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140050730 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1400538A0 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( MiVadSupportsPrivateCommit(a1) && !MiVadMapsLargeImage(v1) )
  {
    v3 = *(unsigned int *)(v2 + 52);
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    if ( (v3 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v2 + 48) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
