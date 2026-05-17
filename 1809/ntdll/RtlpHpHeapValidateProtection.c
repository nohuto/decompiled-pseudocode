/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x180060C34
 * Callers:
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpHpSegMgrReserve @ 0x18005D6A4 (RtlpHpSegMgrReserve.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1800A0740 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v2 = a2;
  if ( a2 == 64 && ((int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 32LL, 0LL) < 0 || (v6 & 0x60) == 0 || v5 != a1) )
  {
    RtlpLogHeapFailure(0, a1, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
