/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14008B6EC
 * Callers:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008B62C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x14008B990 (MiOutlawInswaps.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
