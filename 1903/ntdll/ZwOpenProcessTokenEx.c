/*
 * XREFs of ZwOpenProcessTokenEx @ 0x18009CCE0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180075D40 (RtlImpersonateSelfEx.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_1800D977C @ 0x1800D977C (sub_1800D977C.c)
 *     sub_1800E6498 @ 0x1800E6498 (sub_1800E6498.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
