/*
 * XREFs of NtQuerySystemInformationEx @ 0x18009F9E0
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x1800634C0 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x1800786C0 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007F2B0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008ADA0 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 347LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
