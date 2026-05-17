/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1800FE598
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGrowLanguageList(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageList();
  return a1;
}
