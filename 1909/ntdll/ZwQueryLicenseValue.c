/*
 * XREFs of ZwQueryLicenseValue @ 0x18009F820
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x18007332C (SwitchedRtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800751E0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180082420 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800FD094 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 333;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
