/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A2E10
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x180030CB0 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x18007F950 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180082F00 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E184 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 346LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
