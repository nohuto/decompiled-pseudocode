/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x18009DC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustTokenClaimsAndDeviceGroups(
        HANDLE TokenHandle,
        BOOLEAN UserResetToDefault,
        BOOLEAN DeviceResetToDefault,
        BOOLEAN DeviceGroupsResetToDefault,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewUserState,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewDeviceState,
        PTOKEN_GROUPS NewDeviceGroupsState,
        ULONG UserBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousUserState,
        ULONG DeviceBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousDeviceState,
        ULONG DeviceGroupsBufferLength,
        PTOKEN_GROUPS PreviousDeviceGroups,
        PULONG UserReturnLength,
        PULONG DeviceReturnLength,
        PULONG DeviceGroupsReturnBufferLength)
{
  NTSTATUS result; // eax

  result = 108;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
