/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1402779C0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140579B0C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     HvlCalculateLivedumpBufferSize @ 0x14027A89C (HvlCalculateLivedumpBufferSize.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14027B9F0 (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r10

  if ( (HvlpRootFlags & 2) == 0 || !qword_1404385C8 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  result = HvlCalculateLivedumpBufferSize(*(_QWORD *)(HvlpHypervisorStatsPage + 24), a1);
  if ( (int)result >= 0 )
  {
    if ( VslVsmEnabled )
      return VslLiveDumpQuerySecondaryDataSize(v2);
    else
      *v2 = (unsigned __int64)(unsigned int)dword_1404385D8 << 12;
  }
  return result;
}
