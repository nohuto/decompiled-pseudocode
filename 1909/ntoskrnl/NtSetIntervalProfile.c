/*
 * XREFs of NtSetIntervalProfile @ 0x1406F9F00
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1406F9F50 (KeSetIntervalProfile.c)
 */

NTSTATUS __stdcall NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)ClockSource);
  return 0;
}
