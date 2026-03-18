/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x14089B8F4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x1402CE6CC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) == 0 ? 0xC0000099 : 0;
}
