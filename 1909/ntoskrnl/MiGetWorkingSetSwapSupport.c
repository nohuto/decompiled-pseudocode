/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14008C9EC
 * Callers:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008C92C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x14008CC90 (MiOutlawInswaps.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
