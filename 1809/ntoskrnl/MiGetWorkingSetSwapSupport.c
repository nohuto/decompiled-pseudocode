/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14001290C
 * Callers:
 *     MiOutlawInswaps @ 0x140011E64 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14001284C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2) + 24);
}
