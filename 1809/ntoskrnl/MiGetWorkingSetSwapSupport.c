/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14001290C
 * Callers:
 *     MiOutlawInswaps @ 0x140011E64 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14001284C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400E4E64 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2) + 24);
}
