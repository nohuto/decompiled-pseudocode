/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1402A4120
 * Callers:
 *     MiProcessCommitIntact @ 0x140001C74 (MiProcessCommitIntact.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( ((1 << (*(_BYTE *)(a1 + 48) & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(a1) )
  {
    v2 = *(unsigned int *)(v1 + 52);
    LODWORD(v2) = v2 & 0x7FFFFFFF;
    if ( (v2 | ((unsigned __int64)*(unsigned __int8 *)(v1 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v1 + 48) & 0x8000000) == 0 )
    {
      return 1;
    }
  }
  return result;
}
