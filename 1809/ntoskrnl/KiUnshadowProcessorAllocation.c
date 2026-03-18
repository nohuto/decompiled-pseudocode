/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x14057BA9C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B5DAC (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x140858EEC (MmDeleteShadowMapping.c)
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
