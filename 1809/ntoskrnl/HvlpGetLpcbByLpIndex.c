/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x14027219C
 * Callers:
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 *     KiQueryProcessorNode @ 0x14017E69C (KiQueryProcessorNode.c)
 *     HvlSharedIsr @ 0x140271390 (HvlSharedIsr.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1402716C0 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140271860 (HvlQueryProcessorTopologyEx.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(int a1)
{
  int *result; // rax
  __int64 v2; // rdx
  unsigned int v3; // r8d

  result = HvlpLogicalProcessorRegions;
  v2 = 0LL;
  v3 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    while ( result[1] != a1 )
    {
      ++v3;
      result += 30;
      if ( v3 >= (unsigned int)HvlpLogicalProcessorCount )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( !a1 )
      return result;
    return (int *)v2;
  }
  return result;
}
