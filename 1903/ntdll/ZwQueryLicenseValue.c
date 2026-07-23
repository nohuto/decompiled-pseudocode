/*
 * XREFs of ZwQueryLicenseValue @ 0x18009F070
 * Callers:
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     sub_180072D8C @ 0x180072D8C (sub_180072D8C.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180074D60 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180081D80 (RtlGetProductInfo.c)
 *     sub_1800FCFB4 @ 0x1800FCFB4 (sub_1800FCFB4.c)
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
