/*
 * XREFs of HvlpGetLpcbByApicId @ 0x14027216C
 * Callers:
 *     KiQueryProcessorNode @ 0x14017E69C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x140271590 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140818BE0 (HvlpEnableRootVirtualProcessor.c)
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
