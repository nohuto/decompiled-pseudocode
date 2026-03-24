/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x14085EA34
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400E5128 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBA90 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x1402B836C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0LL, a3) == 0
       ? 0xC0000099
       : 0;
}
