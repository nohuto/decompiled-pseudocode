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

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( a2 == 64 && ((int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 40LL, 0LL) < 0 || (v6 & 0x60) == 0 || v5 != a1) )
  {
    RtlpLogHeapFailure(0, a1, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
