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

__int64 __fastcall RtlpHpFreeVA(PVOID *BaseAddress, PSIZE_T RegionSize, int a3, _OWORD *a4)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  PVOID v9; // rcx
  ULONG_PTR v10; // rdx
  void *v11; // rcx
  ULONG_PTR v12; // rdx

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) < 2u )
      v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, a3 & 0xC000);
  }
  else
  {
    v9 = *BaseAddress;
    v10 = (ULONG_PTR)v9 + *RegionSize;
    v11 = (void *)(((unsigned __int64)v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v12 = v10 - (_QWORD)v11;
    *BaseAddress = v11;
    *RegionSize = v12;
    if ( !v12 )
      return v4;
    RtlpHpVaMgrCtxFree(&unk_180166AB8, BaseAddress, RegionSize);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v5, *RegionSize, *BaseAddress, v4);
  return v4;
}
