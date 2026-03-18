/*
 * XREFs of HvlCalculateLivedumpSize @ 0x14028BA80
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A89AC (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     HvlCalculateLivedumpBufferSize @ 0x14028EA54 (HvlCalculateLivedumpBufferSize.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14028FF00 (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r10

  if ( (HvlpRootFlags & 2) == 0 || !qword_140463148 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  result = HvlCalculateLivedumpBufferSize(*(_QWORD *)(HvlpHypervisorStatsPage + 24), a1);
  if ( (int)result >= 0 )
  {
    if ( VslVsmEnabled )
      return VslLiveDumpQuerySecondaryDataSize(v2);
    else
      *v2 = (unsigned __int64)(unsigned int)dword_140463158 << 12;
  }
  return result;
}
