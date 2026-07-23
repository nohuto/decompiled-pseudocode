/*
 * XREFs of ZwOpenProcessToken @ 0x18009EB30
 * Callers:
 *     sub_18000F170 @ 0x18000F170 (sub_18000F170.c)
 *     sub_180066D68 @ 0x180066D68 (sub_180066D68.c)
 *     RtlAdjustPrivilege @ 0x180078490 (RtlAdjustPrivilege.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 291;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
