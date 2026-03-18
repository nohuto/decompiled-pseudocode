/*
 * XREFs of NtSetIntervalProfile @ 0x1406D6C90
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1406D6CE0 (KeSetIntervalProfile.c)
 */

NTSTATUS __stdcall NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)ClockSource);
  return 0;
}
