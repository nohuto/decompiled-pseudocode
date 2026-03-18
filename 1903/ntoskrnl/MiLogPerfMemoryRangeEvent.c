/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1402C0B60
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x14088A810 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v9 = 0;
  v6[1] = a1;
  v6[2] = a4;
  v6[0] = v5 | (a3 >> 1) & 0xF;
  v8 = 24;
  v7 = v6;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B02u);
}
