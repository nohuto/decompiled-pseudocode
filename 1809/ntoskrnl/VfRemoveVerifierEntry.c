/*
 * XREFs of VfRemoveVerifierEntry @ 0x14094B9F8
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140938B30 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
