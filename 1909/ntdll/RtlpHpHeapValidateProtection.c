/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x180047CBC
 * Callers:
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlpHpSegMgrReserve @ 0x18004E96C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(PVOID BaseAddress, unsigned int a2)
{
  unsigned int v2; // ebx
  PVOID MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( a2 == 64
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryRegionInformation,
          &MemoryInformation,
          0x28uLL,
          0LL) < 0
     || (v6 & 0x60) == 0
     || MemoryInformation != BaseAddress) )
  {
    RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
