/*
 * XREFs of RtlpHpFreeVA @ 0x180048170
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrReserve @ 0x18004E96C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x180050284 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010ACF4 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18010AE60 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x18004F770 (RtlpHpVaMgrCtxFree.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     RtlpHpTlLogVAChange @ 0x180107504 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) < 2u )
      v4 = ZwFreeVirtualMemory(-1LL, a1, a2, (unsigned __int16)a3 & 0xC000);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( !v12 )
      return v4;
    RtlpHpVaMgrCtxFree(&unk_180166AB8, a1, a2);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v5, *a2, *a1, v4);
  return v4;
}
