/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009CB40
 * Callers:
 *     sub_18001A870 @ 0x18001A870 (sub_18001A870.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048320 @ 0x180048320 (sub_180048320.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_180055358 @ 0x180055358 (sub_180055358.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     sub_180072460 @ 0x180072460 (sub_180072460.c)
 *     sub_180081240 @ 0x180081240 (sub_180081240.c)
 *     RtlLockCurrentThread @ 0x180081AE0 (RtlLockCurrentThread.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 *     RtlUnlockCurrentThread @ 0x180085E40 (RtlUnlockCurrentThread.c)
 *     sub_1800CD600 @ 0x1800CD600 (sub_1800CD600.c)
 *     sub_1800D4E64 @ 0x1800D4E64 (sub_1800D4E64.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800EF8F8 @ 0x1800EF8F8 (sub_1800EF8F8.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F40B0 (RtlFlushSecureMemoryCache.c)
 *     sub_1800F4B1C @ 0x1800F4B1C (sub_1800F4B1C.c)
 *     RtlGetNonVolatileToken @ 0x1800F5FC0 (RtlGetNonVolatileToken.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 *     sub_180104AC0 @ 0x180104AC0 (sub_180104AC0.c)
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 *     sub_18010ACB4 @ 0x18010ACB4 (sub_18010ACB4.c)
 *     sub_18010B938 @ 0x18010B938 (sub_18010B938.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
