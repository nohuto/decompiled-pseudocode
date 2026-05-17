/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x180100DEC
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18004C4C0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18004CAB0 (RtlpLoadMachineUIByPolicy.c)
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
