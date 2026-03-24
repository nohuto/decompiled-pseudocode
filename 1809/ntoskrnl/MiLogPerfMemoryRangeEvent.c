/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1402A9318
 * Callers:
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiAllocateContiguousMemory @ 0x1400E651C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140122FC0 (MmFreeContiguousMemory.c)
 *     MiDecommitLargePoolVa @ 0x14015B2E0 (MiDecommitLargePoolVa.c)
 *     MiExpandNonPagedPool @ 0x1401626E8 (MiExpandNonPagedPool.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140683260 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14084E738 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3710 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int64 *v9; // [rsp+48h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v11 = 0;
  v7 = a1;
  v8 = a4;
  v6 = v5 | (a3 >> 1) & 0xF;
  v10 = 24;
  v9 = &v6;
  EtwTraceKernelEvent((__int64)&v9, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B02u);
}
