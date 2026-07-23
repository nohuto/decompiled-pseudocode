/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A2C70
 * Callers:
 *     RtlGetVersion @ 0x180028110 (RtlGetVersion.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A960 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180085C90 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800FF7B0 (RtlpGetWindowsPolicy.c)
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

  result = 332;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
