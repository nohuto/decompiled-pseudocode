/*
 * XREFs of MmIssueMemoryListCommand @ 0x14074483C
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x14072913C (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(_DWORD *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  if ( a2 < 4 )
    return 3221225476LL;
  if ( *a1 > 5u )
    return 3221225485LL;
  if ( *a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand();
  return 3221225569LL;
}
