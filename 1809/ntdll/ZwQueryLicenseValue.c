/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A2C50
 * Callers:
 *     RtlGetVersion @ 0x180028110 (RtlGetVersion.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A950 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180085C80 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800FF7B0 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 332LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
