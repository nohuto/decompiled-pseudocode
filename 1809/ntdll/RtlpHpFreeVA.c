/*
 * XREFs of RtlpHpFreeVA @ 0x1800611FC
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18005D6A4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x180066270 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010D1EC (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x180065734 (RtlpHpVaMgrCtxFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     RtlpHpTlLogVAChange @ 0x18010A060 (RtlpHpTlLogVAChange.c)
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
    RtlpHpVaMgrCtxFree(&unk_180166950, BaseAddress, RegionSize);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v5, *RegionSize, *BaseAddress, v4);
  return v4;
}
