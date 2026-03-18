/*
 * XREFs of HvlpGetLpcbByApicId @ 0x140285FA8
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x140186DA8 (KiQueryProcessorNode.c)
 *     HvlGetLpIndexFromApicId @ 0x140285140 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x14085141C (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByApicId(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 30;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
