/*
 * XREFs of ZwQuerySystemInformation @ 0x18009CDA0
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004CCA4 @ 0x18004CCA4 (sub_18004CCA4.c)
 *     RtlSystemTimeToLocalTime @ 0x18007A7F0 (RtlSystemTimeToLocalTime.c)
 *     sub_18007C45C @ 0x18007C45C (sub_18007C45C.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D5D80 @ 0x1800D5D80 (sub_1800D5D80.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     RtlQueryModuleInformation @ 0x1800E2210 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E4220 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F4120 (RtlRegisterSecureMemoryCacheCallback.c)
 *     sub_1800F5708 @ 0x1800F5708 (sub_1800F5708.c)
 *     sub_1800F7A6C @ 0x1800F7A6C (sub_1800F7A6C.c)
 *     sub_1801070F4 @ 0x1801070F4 (sub_1801070F4.c)
 *     sub_180107738 @ 0x180107738 (sub_180107738.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
