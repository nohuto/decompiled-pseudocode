/*
 * XREFs of VfRemoveVerifierEntry @ 0x14094A9F8
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140937B30 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
