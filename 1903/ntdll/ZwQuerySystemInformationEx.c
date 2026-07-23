/*
 * XREFs of ZwQuerySystemInformationEx @ 0x18009F230
 * Callers:
 *     sub_180063420 @ 0x180063420 (sub_180063420.c)
 *     RtlWow64GetProcessMachines @ 0x180078240 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007EC10 (RtlWow64IsWowGuestMachineSupported.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 347;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
