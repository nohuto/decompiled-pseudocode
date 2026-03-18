/*
 * XREFs of VfRemoveVerifierEntry @ 0x14098A3E0
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140977414 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
