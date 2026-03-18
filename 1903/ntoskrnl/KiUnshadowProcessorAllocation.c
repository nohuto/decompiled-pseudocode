/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x1405AB9BC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x140892B78 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 20480LL);
    return MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return result;
}
