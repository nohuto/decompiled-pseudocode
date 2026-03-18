/*
 * XREFs of HvlpGetLpcbByApicId @ 0x140271E7C
 * Callers:
 *     KiQueryProcessorNode @ 0x14017E53C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EA70 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x1402712A0 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140817A00 (HvlpEnableRootVirtualProcessor.c)
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
